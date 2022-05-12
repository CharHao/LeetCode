//给你一个整数数组 nums 。如果任一值在数组中出现 至少两次 ，返回 true ；如果数组中每个元素互不相同，返回 false 。
//
//
//示例 1：
//
//输入：nums = [1, 2, 3, 1]
//输出：true

#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<unordered_map>
#include<string>
#include<unordered_set>
using namespace std;
/*
    用自提供的hashmap
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
    哈希set解答
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