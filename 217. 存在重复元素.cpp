//����һ���������� nums �������һֵ�������г��� �������� ������ true �����������ÿ��Ԫ�ػ�����ͬ������ false ��
//
//
//ʾ�� 1��
//
//���룺nums = [1, 2, 3, 1]
//�����true

#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<unordered_map>
#include<string>
#include<unordered_set>
using namespace std;
/*
    �����ṩ��hashmap
*/
bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, int> hashmap;
    for (int num : nums) {
        if (hashmap.count(num)) {
            return true;
        }
        else {
            hashmap[num]++;
        }
    }
    return false;
}

/*
    ��ϣset���
*/
bool containsDuplicate2(vector<int>& nums) {
    unordered_set<int> set;
    for (int num : nums) {
        if (set.find(num) == set.end()) {
            set.insert(num);
        }
        else {
            return true;
        }
    }
    return false;
}