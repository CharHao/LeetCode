#include<iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
};

/*
	ͷ�巨������������
*/
Node* createList() {
	Node* pHead = new Node;
	pHead->next = NULL;
	int val;
	cout << "������Ҫ����ڵ��ֵ��-1�˳���:" << endl;
	cin >> val;
	while (val != -1) {
		Node* pNew = new Node;
		pNew->data = val;
		pNew->next = pHead->next;
		pHead->next = pNew;
		cout << "������Ҫ����ڵ��ֵ��-1�˳���:" << endl;
		cin >> val;
	}
	return pHead;
}

/*
	β�巨������������
*/
Node* createList2() {
	Node* pHead = new Node;
	pHead->next = NULL;
	//βָ��
	Node* pTail = pHead;
	int val;
	cout << "������Ҫ����ڵ��ֵ��-1�˳���:" << endl;
	cin >> val;
	while (val != -1) {
		Node* pNew = new Node;
		pNew->data = val;
		pNew->next = NULL;
		pTail->next = pNew;
		pTail = pNew;
		cout << "������Ҫ����ڵ��ֵ��-1�˳���:" << endl;
		cin >> val;
	}
	return pHead;
}


/*
	�������
	��pHead��ָ������ĵ�pos���ڵ��ǰ�����һ���µĽ�㣬
*/
Node* insertNode(Node* pHead, int pos, int val) {

}

/*
	��������
*/
void traverseList(Node* head) {
	Node* p = head->next;
	while (p != NULL) {
		cout << p->data << endl;
		p = p->next;
	}
}
int main_4() {
	Node* phead = NULL;
	phead = createList2();
	traverseList(phead);
	return 0;
}