#include<iostream>
#include<vector>
using namespace std;

//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
//输入：nums = [0, 1, 2, 2, 3, 0, 4, 2], val = 2
//输出：5, nums = [0, 1, 4, 0, 3]

 //方法一：拷贝覆盖
int removeElement4(vector<int>& nums, int val) {
    int index = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[index] = nums[i];
            index++;
        }
    }
    return index;
}
/*
    较为深奥
*/
int removeElement1(vector<int>& nums, int val) {
    int right = nums.size();
    int left = 0;
    while (left < right)
    {
        if (nums[left] == val) {
            nums[left] = nums[right - 1];
            right--;
        }
        else {
            left++;
        }
    }
    return left;
}

/*
    便于理解
    双指针：对撞双指针
*/
int removeElement2(vector<int>& nums, int val) {
    if (nums.size() == 0) {
        return 0;
    }
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        while (left < right && nums[left] != val) {
            left++;
        }
        while (left < right && nums[right] == val) {
            right--;
        }
        swap(nums[left], nums[right]);
    }
    return nums[left] == val ? left : left + 1;
}

/*
    快慢双指针
    [0, 1, 2, 2, 3, 0, 4, 2]
*/
int removeElement3(vector<int>& nums, int val) {
    int j = 0;//记录和val不相等 交换多少次 把不相等的排到前面有多少个
    for (int i = 0; j < nums.size(); i++) {
        if (nums[i] != val) {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}
int main_3() {
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);
    v.push_back(0);
    v.push_back(4);
    v.push_back(2);
    int m = removeElement1(v, 2);
    cout << m << endl;
    return 0;
}