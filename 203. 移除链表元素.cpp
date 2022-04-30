//����һ�������ͷ�ڵ� head ��һ������ val ������ɾ���������������� Node.val == val �Ľڵ㣬������ �µ�ͷ�ڵ� ��
//���룺head = [1, 2, 6, 3, 4, 5, 6], val = 6
//�����[1, 2, 3, 4, 5]
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

ListNode* removeElements(ListNode* head, int val) {
    ListNode* dummy = new ListNode(0, head);
    ListNode* prev = dummy;
    while (head != NULL) {
        if (head->val == val) {
            prev->next = head->next;
            head = prev->next;
        }
        else {
            prev = head;
            head = head->next;
        }
    }
    return dummy->next;
}