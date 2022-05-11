//nums1 中数字 x 的 下一个更大元素 是指 x 在 nums2 中对应位置 右侧 的 第一个 比 x 大的元素。
//
//给你两个 没有重复元素 的数组 nums1 和 nums2 ，下标从 0 开始计数，其中nums1 是 nums2 的子集。
//
//对于每个 0 <= i < nums1.length ，找出满足 nums1[i] == nums2[j] 的下标 j ，并且在 nums2 确定 nums2[j] 的 下一个更大元素 。如果不存在下一个更大元素，那么本次查询的答案是 - 1 。
//
//	返回一个长度为 nums1.length 的数组 ans 作为答案，满足 ans[i] 是如上所述的 下一个更大元素 。
#include<iostream>
#include<vector>
#include<unordered_map>
#include<stack>
using namespace std;
/*
    单调栈||map的使用
*/
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> hashmap;
    stack<int> stk;
    for (int i = 0; i < nums2.size(); i++) {
        int temp = nums2[i];
        while (!stk.empty() && temp > stk.top()) {
            hashmap[stk.top()] = temp;
            stk.pop();
        }
        stk.push(temp);
    }
    vector<int> ans;
    for (int num : nums1) {
        if (hashmap.count(num)) {
            ans.push_back(hashmap[num]);
        }
        else {
            ans.push_back(-1);
        }
    }
    return ans;
}