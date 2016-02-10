#include "list_colas.h"
#include <iostream>
using namespace std;
template<class T>
Cola<T>::~Cola(){
   for(Nodco<T> *p;!isEmpty();){
	p=primero->next;
	delete primero;
        primero=p;
    }
}

template<class T>
void Cola<T>::push(const T& el){
	if(ultimo!=0){
		ultimo->next=new Nodco<T>(el);
		ultimo=ultimo->next;	
	}
	else primero=ultimo=new Nodco<T>(el);
}

	


template<class T>
void Cola<T>::pop(){
   if(primero!=NULL){
	for(Nodco<T> *p;!isEmpty();){
		cout<<primero->info<<" ";
		p=primero->next;	
		delete primero;
        	primero=p;
	
        }
	cout<<endl;
    }
   else{
    cout<<"LA COLA ESTA VACIA"<<endl;
	}
}



/*
template<class T>
void Cola<T>::print_cola(){
	Nodco<T> *p;
	for(p=primero;!(p==NULL);p=p->next){				 
		cout<<p->info << " ";

	}
}
*/

