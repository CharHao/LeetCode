#include<iostream>
#include<vector>
using namespace std;
//给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
//
//请注意 ，必须在不复制数组的情况下原地对数组进行操作。
//
//
//
//示例 1:
//
//输入: nums = [0, 1, 0, 3, 12]
//输出 : [1, 3, 12, 0, 0]

/*
    解一：两次遍历
*/
void moveZeroes(vector<int>& nums) {
    int j = 0;
    for (int i = 0; i < nums.size(); i++) {
        //把不等于0的元素依次和前面元素互换
        if (nums[i] != 0) {
            nums[j] = nums[i];
            j++;
        }
    }
    //把后面的元素置为0
    for (int i = j; i < nums.size(); i++) {
        nums[i] = 0;
    }
}


int main_2() {
    vector<int> v;
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    moveZeroes(v);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
    //cout << m << endl;
    return 0;
}