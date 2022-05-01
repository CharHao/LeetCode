//���㵥�����ͷ�ڵ� head �����㷴ת���������ط�ת�������
//���룺head = [1, 2, 3, 4, 5]
//�����[5, 4, 3, 2, 1]
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
    �½�ͷ��㣬����ԭ������ͷ�巨����
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
    ��������˫ָ��
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