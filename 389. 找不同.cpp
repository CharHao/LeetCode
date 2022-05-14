给定两个字符串 s 和 t ，它们只包含小写字母。

//字符串 t 由字符串 s 随机重排，然后在随机位置添加一个字母。
//请找出在 t 中被添加的字母。
//
//示例 1：
//
//输入：s = "abcd", t = "abcde"
//输出："e"
//解释：'e' 是那个被添加的字母。
#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<string>
using namespace std;

/*
	用字符串
*/
char findTheDifference(string s, string t) {
    for (char c : s) {
        if (t.find(c) != -1) {
            t.erase(t.find(c), 1);
        }
    }
    return t[0];

}

/*
    数组的哈希表
*/
char findTheDifference(string s, string t) {
    if (s == "") return t[0];
    int nums[26] = { 0 };
    for (int i = 0; i < t.length(); i++) {
        if (i < s.length()) {
            nums[s[i] - 'a']++;
        }
        nums[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (nums[i] != 0) {
            return i + 'a';
        }
    }
    return 'a';
}