#include "listasCicl.h"
#include <iostream>
using namespace std;

template<class T>

IntSLLis<T>::~IntSLLis(){
    Nodc<T> *p;
    Nodc<T> *pr;
	pr=prim;
    for(p=prim->next;p!=pr;p=p->next){
		delete prim;
        prim=p;
    }
    delete prim->next;
}


template<class T>
void IntSLLis<T>::addToActual(const T& el){
    if(actual!=0){
		actual->next=new Nodc<T>(el,prim);

		actual=actual->next;
		
        }
	else{
		 prim=actual=new Nodc<T>(el,prim);

	}
}
template<class T>
void IntSLLis<T>::print_list(){
	Nodc<T> *pr;
	pr=prim;
	Nodc<T> *p;
	for(p=prim->next;!(p==pr);p=p->next){				 
		cout<<p->info << " ";

	}
	cout<<p->info<<endl;
}
template<class T>

void IntSLLis<T>::deleteNode(const T& el){
  if(prim !=0){
	if(prim==actual && el==prim->info){
		delete prim;
		prim=actual=0;
	}
	else if(el==prim->info){
		Nodc<T> *tmp=prim->next;
		prim=prim->next;
		delete tmp;
	}
    	else{
	      Nodc<T> *pred, *tmp;
	      for(pred=prim,tmp=prim->next;
              tmp !=0 && !(tmp->info==el);
              pred =pred->next,tmp=tmp->next);
              pred->next=tmp->next;
              delete tmp;
	     
	}
   }
}


