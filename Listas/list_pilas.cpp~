#include "list_pilas.h"
#include <iostream>
#include <string.h>
using namespace std;

template<class T>
Pila<T>::~Pila(){
   for(Nodp<T> *p;!isEmpty();){
	p=primero->next;
	delete primero;
        primero=p;
    }
}


template<class T>
void Pila<T>::push(const T& el){
	primero=new Nodp<T>(el,primero);
	if(primero==0)
		primero=ultimo;
	
}
	

template<class T>
void Pila<T>::pop(){
	for(Nodp<T> *p;!isEmpty();){
	cout<<primero->info<<" ";
	p=primero->next;	
	delete primero;
        primero=p;
	
    }
    cout<<endl;
}

template<class T>
void Pila<T>::push_pref(){
	string a;
	cin>>a;
	int in=0;
	char de[a.length()];
	for(int i=0;i<a.length();i++){
	  if(a[i]!='0'  && a[i]!='1' && a[i]!='2' && a[i]!='3' && a[i]!='4' && a[i]!='5' && a[i]!='6' && a[i]!='7' && a[i]!='8' && a[i]!='9'){ 	
		de[in]=a[i];	
		primero=new Nodp< char>(de[in],primero);
		if(primero==0)
			primero=ultimo;
		in++;
		}
		//cout<<primero->info;
        }
}

//void Pilar<T>::esc(){
//	}
/*
template<class T>
void Pila<T>::separa_pref(char h){
	char pref[20]=h;
	for(int i=0;i<strlen(pref);i++){
	//	if (pref[i]!='1' || pref[i]!='2'|| pref[i]!='3'|| pref[i]!='4'|| pref[i]!='5' || pref!='6' || pref!='7'|| pref!='8' || pref!='9'|| pref!='0'){
	//push(pref[i]);	
	cout<<pref[i]<<endl;	
	}
	
	//}	


}
*/
	
/*
template <class T>
T *IntSLList<T>::deleteFromHead(){
	if(!isEmpty()){
        T *el=new T(head->info);
        IntNode<T>*tmp=head;
        if(head==tail)
            head=tail=0;
        else head =head->next;
        delete tmp;
        return el;
	}
	else return 0;
}

template<class T>
T IntSLList<T>::deleteFromTail(){
	T el=tail->info;
	if(head==tail){
		delete head;
		head=tail=0;
	}
	else {
		IntNode<T> *tmp;
		for(tmp=head;tmp->next !=tail;tmp=tmp->next);
		delete tail;
		tail=tmp;
		tail->next=0;
	}
	return el;
}

template<class T>
void IntSLList<T>::deleteNode(const T& el){
  if(head !=0){
	if(head==tail && el==head->info){
		delete head;
		head=tail=0;
	}
	else if(el==head->info){
		IntNode<T> *tmp=head->next;
		head=head->next;
		delete tmp;
	}
    	else{
	      IntNode<T> *pred, *tmp;
	      for(pred=head,tmp=head->next;
              tmp !=0 && !(tmp->info==el);
              pred =pred->next,tmp=tmp->next);
              pred->next=tmp->next;
              delete tmp;
	     
	}
   }
}
template<class T>
bool IntSLList<T>::isInList(const T& el)const{
	IntNode<T> *tmp;
	for(tmp=head;tmp!=0 && !(tmp->info==el);tmp=tmp->next);
	return tmp!=0;
}
*/

template<class T>
void Pila<T>::print_pila(){
	Nodp<T> *p;
	for(p=primero;!(p==NULL);p=p->next){				 
		cout<<p->info << " ";

	}
	cout<<endl;
}

