#include<iostream>
#include<vector>
using namespace std;

//����һ������ nums ��һ��ֵ val������Ҫ ԭ�� �Ƴ�������ֵ���� val ��Ԫ�أ��������Ƴ���������³��ȡ�
//���룺nums = [0, 1, 2, 2, 3, 0, 4, 2], val = 2
//�����5, nums = [0, 1, 4, 0, 3]

 //����һ����������
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
    ��Ϊ���
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
    �������
    ˫ָ�룺��ײ˫ָ��
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
    ����˫ָ��
    [0, 1, 2, 2, 3, 0, 4, 2]
*/
int removeElement3(vector<int>& nums, int val) {
    int j = 0;//��¼��val����� �������ٴ� �Ѳ���ȵ��ŵ�ǰ���ж��ٸ�
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