//给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。
//
//有效字符串需满足：
//
//左括号必须用相同类型的右括号闭合。
//左括号必须以正确的顺序闭合。

#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;
bool isValid(string s) {
    if (s == "") return true;
    char c;
    stack<char> stk;
    char temp;
    for (int i = 0; i < s.size(); i++) {
        c = s[i];
        if (c == '(' || c == '{' || c == '[') {
            stk.push(c);
        }
        else {
            if (stk.empty()) {
                return false;
            }
            temp = stk.top();
            if ((c == ')' && temp == '(') ||
                c == '}' && temp == '{' ||
                c == ']' && temp == '[') {
                stk.pop();
            }
            else {
                return false;
            }
        }
    }
    if (!stk.empty()) {
        return false;
    }
    else {
        return true;
    }
}