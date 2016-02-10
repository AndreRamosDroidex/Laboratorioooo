#ifndef DOUBLY_LINKED_C_D_LIST
#define DOUBLY_LINKED_C_D_LIST
#include <iostream>
using namespace std;
template<class T>
class Nodedc{
public:
	Nodedc(){
		next=prev=0;
	}
	Nodedc(const T& el,Nodedc *n,Nodedc*p){
		info=el;next=n;prev=p;
	}
	T info;
	Nodedc<T> *next,*prev;
};

template<class T>
class Listdc{
public:
	Listdc(){
		prim=actual=0;

	}
	~Listdc();
	T isEmpty(){
		  return prim==0;
	}
	void addToActual(const T&);
	void print_listDobl();
    void deleteNode(const T&);
protected:
	Nodedc<T>*prim,*actual;

};
#endif
