#ifndef ARBOL_LIST
#define ARBOL_LIST
#include <iostream>
using namespace std;
template<class T>
class Node{
public:
	Node(){
		next=prev=0;
	}
	Node(const T& el,Node *n,Node*p){
		info=el;mayor=n;menor=p;
	}
	T info;
	Node<T> *mayor,*menor;
};

template<class T>
class Arbol{
public:
	Arbol(){
		head=tail=0;

	}
	~Arbol();
	T isEmpty(){
		  return head==0;
	}
	
	//T deleteFromDLLTail();
	//T deleteFromDLLHead();
	void add(const T&);
	//void print_listDobl();
    //bool isInList(const T&);
	//void deleteNodo(const T&);
protected:
	Node<T>*head,*tail;

};
#endif
