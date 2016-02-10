#include "listasDobl.h"
#include <iostream>
using namespace std;

template<class T>
DoublyLinkedList<T>::~DoublyLinkedList(){
    for(Node<T> *p;!isEmpty();){
	p=head->next;
	delete head;
        head=p;
    }
}

template<class T>
void DoublyLinkedList<T> :: addToDLLTail(const T& el){
	if(tail !=0){
		tail=new Node<T>(el,0,tail);
		tail->prev->next=tail;
	}
	else head=tail=new Node<T>(el,0,0);
}
template<class T>
void DoublyLinkedList<T>::addToDLLHead(const T& el){
	if(head !=0){
	   head=new Node<T>(el,head,0);
	   head->next->prev=head;
	}
	else tail=head=new Node<T>(el,0,0);
}

template <class T>
T DoublyLinkedList<T>::deleteFromDLLTail() {
    T el =tail->info;
    if(head == tail){
            delete head;
            head=tail=0;
    }
    else{
        tail=tail->prev;
        delete tail->next;
        tail->next=0;
    }
    return el;
}
template <class T>
T DoublyLinkedList<T>::deleteFromDLLHead() {
    T el =head->info;
    if(head == tail){
            delete head;
            head=tail=0;
    }
    else{
        Node<T>*tmp=head;
        head=head->next;
        delete tmp;
        head->prev=0;
    }
    return el;
}
template <class T>
void DoublyLinkedList<T>::deleteNode(const T& el){
    
    if(head !=0){
        if(head==tail && el==head->info){
		   delete head;
		   head=tail=0;
		
        }
        else if(el==head->info){
            Node<T>*tmp=head;
            head=head->next;
            delete tmp;
	            
	}
        else{
            Node<T>*tmp;
	    Node<T>*tmp2;	    
	    tmp=head;
	    while(tmp!=NULL && tmp->info!=el){			
		tmp=tmp->next;
			
		
		}
	   tmp->prev->next=tmp->next;
       tmp->next->prev=tmp->prev;
	    
	   delete tmp;
            
        
    }
  }
}

//bool IntSLList::isInList(int el)const{
//	IntNode *tmp;
//	for(tmp=head;tmp!=0 && !(tmp->info==el);tmp=tmp->next);
//	return tmp!=0;
//}
template <class T>
void DoublyLinkedList<T>::print_listDobl(){
	Node<T> *p;
	for(p=tail;!(p==NULL);p=p->prev){				 
		cout<<p->info << " ";

	}  
}
