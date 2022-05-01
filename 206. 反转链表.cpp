//给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。
//输入：head = [1, 2, 3, 4, 5]
//输出：[5, 4, 3, 2, 1]
#include<iostream>
#include<vector>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

/*
    新建头结点，遍历原链表，用头插法插入
*/
ListNode* reverseList1(ListNode* head) {
    ListNode* dummy = new ListNode();
    int val;
    while (head != NULL) {
        val = head->val;
        head = head->next;
        ListNode* pNew = new ListNode(val);
        pNew->next = dummy->next;
        dummy->next = pNew;
    }
    return dummy->next;
}

/*
    方法二：双指针
*/
ListNode* reverseList(ListNode* head) {
    ListNode* pre = nullptr;
    ListNode* cur = head;
    ListNode* temp = nullptr;
    while (cur != nullptr) {
        temp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = temp;
    }
    return pre;
}