#include<iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
};

/*
	头插法：创建单链表
*/
Node* createList() {
	Node* pHead = new Node;
	pHead->next = NULL;
	int val;
	cout << "请输入要插入节点的值（-1退出）:" << endl;
	cin >> val;
	while (val != -1) {
		Node* pNew = new Node;
		pNew->data = val;
		pNew->next = pHead->next;
		pHead->next = pNew;
		cout << "请输入要插入节点的值（-1退出）:" << endl;
		cin >> val;
	}
	return pHead;
}

/*
	尾插法：创建单链表
*/
Node* createList2() {
	Node* pHead = new Node;
	pHead->next = NULL;
	//尾指针
	Node* pTail = pHead;
	int val;
	cout << "请输入要插入节点的值（-1退出）:" << endl;
	cin >> val;
	while (val != -1) {
		Node* pNew = new Node;
		pNew->data = val;
		pNew->next = NULL;
		pTail->next = pNew;
		pTail = pNew;
		cout << "请输入要插入节点的值（-1退出）:" << endl;
		cin >> val;
	}
	return pHead;
}


/*
	链表插入
	在pHead所指向链表的第pos个节点的前面插入一个新的结点，
*/
Node* insertNode(Node* pHead, int pos, int val) {

}

/*
	遍历链表
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