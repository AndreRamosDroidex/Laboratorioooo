#ifndef DOUBLY_LINKED_LIST
#define DOUBLY_LINKED_LIST
#include <iostream>
using namespace std;
template<class T>
class Node{
public:
	Node(){
		next=prev=0;
	}
	Node(const T& el,Node *n,Node*p){
		info=el;next=n;prev=p;
	}
	T info;
	Node<T> *next,*prev;
};

template<class T>
class DoublyLinkedList{
public:
	DoublyLinkedList(){
		head=tail=0;

	}
	~DoublyLinkedList();
	T isEmpty(){
		  return head==0;
	}
	
	T deleteFromDLLTail();
	T deleteFromDLLHead();
	void addToDLLTail(const T&);
	void addToDLLHead(const T&);
    	void deleteNode(const T&);
	void print_listDobl();
        //bool isInList(const T&);
	//void deleteNodo(const T&);
protected:
	Node<T>*head,*tail;

};
#endif
