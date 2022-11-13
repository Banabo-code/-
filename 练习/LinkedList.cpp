#include"LinkedList.h"
#include<iostream>
using namespace std;
template<class T>
Node<T>* LinkedList<T>::newNode(const T& item, Node<T>* ptrNext)
{
	Node<T>* p = new Node<T>();
	p->data = item;
	p->next = ptrNext;
	return p;
}
template<class T>
void LinkedList<T>::freeNode(Node<T>* p)
{
	prevPtr->next = p->next;
	delete p;
}
template<class T>
void LinkedList<T>::copy(const LinkedList<T>& L)
{
	front = L.front;
	rear = L.rear;
	prevPtr = L.prevPtr;
	currPtr = L.currPtr;
	size = L.size;
	position = L.position;
}
//Î´Íê