//#include <iostream>
//#include<stdlib.h>
//using namespace std;
//typedef struct Node 
//{	
//	Node* next;
//	int value;
//
//	Node(int value, Node* node)
//	{
//		this->next = node;
//		this->value = value;
//	}
//
//}Node;
//
// Node* ReverseList(Node* head) 
//{
//	Node* prev = nullptr;
//	while (head)
//	{
//		Node* next = head->next;
//		head->next = prev;
//		prev = head;
//		head = next;
//	}
//	head = prev;
//	return head;
//}
//
//
//int main()
//{
//	Node* n5 = new Node(5, nullptr);
//	Node* n4 = new Node(4, n5);
//	Node* n3 = new Node(3, n4);
//	Node* n2 = new Node(2, n3);
//	Node* n1 = new Node(1, n2);
//	Node* n0 = new Node(0, n1);
//
//	Node* p1 = n0;
//	while (p1 != NULL)
//	{
//		cout << p1->value << "  ";
//		p1 = p1->next;
//	}
//	cout << endl;
//	n0 = ReverseList(n0);
//	Node* p2 = n0;
//	while (p2 != NULL)
//	{
//		cout<< p2->value << "  ";
//		p2 = p2->next;
//	}
//	system("pause");
//	return 0;
//}

#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct Node
{
	int value;
	Node* next;
	Node(int value,Node* node)
	{
		this->value = value;
		this->next = node;
	}
}Node;

Node* Revesrse(Node* head)
{
	Node* prev = nullptr;
	Node* cur = head;
	while (cur)
	{
		Node* next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	cur = prev;
	return cur;
}

int main()
{
	Node* n5 = new Node(5, nullptr);
	Node* n4 = new Node(4, n5);
	Node* n3 = new Node(3, n4);
	Node* n2 = new Node(2, n3);
	Node* n1 = new Node(1, n2);
	Node* n0 = new Node(0, n1);
	Node* p1 = n0;
	while (p1)
	{
		cout << p1->value << ' ';
		p1 = p1->next;
	}
	cout << endl;
	n0 = Revesrse(n0);
	Node* p2 = n0;
	while (p2)
	{
		cout << p2->value << ' ';
		p2 = p2->next;
	}
	cout << endl;
	Node* p3 = n0;
	while (p3)
	{
		cout << p3->value << ' ';
		p3 = p3->next;
	}
	system("pause");
	return 0;
}