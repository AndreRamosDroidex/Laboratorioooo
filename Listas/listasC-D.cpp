#include "listasC-D.h"
#include <iostream>
using namespace std;

template<class T>
Listdc<T>::~Listdc(){
    Nodedc<T> *p;
    Nodedc<T> *pr;
	pr=prim;
    for(p=prim->next;p!=pr;p=p->next){
		delete prim;
        prim=p;
    }
    delete prim->next;
}
template<class T>
void Listdc<T> :: addToActual(const T& el){
	if(actual !=0){
		actual=new Nodedc<T>(el,prim,actual);
		actual->prev->next=actual;
	}
	else prim=actual=new Nodedc<T>(el,prim,0);
}

template <class T>
void Listdc<T>::deleteNode(const T& el){
    
    if(prim !=0){
        if(prim==actual && el==prim->info){
		   delete prim;
		   prim=actual=0;
		
        }
        else if(el==prim->info){
            Nodedc<T>*tmp=prim;
            prim=prim->next;
            delete tmp;
	            
	}
        else{
            Nodedc<T>*tmp;
	      
	    tmp=prim;
	    while(tmp->info!=el){				
		tmp=tmp->next;
			
		
		}
	   tmp->prev->next=tmp->next;
	
           tmp->next->prev=tmp->prev;
	    
	   delete tmp;
          
        
    }
  }
}


template <class T>
void Listdc<T>::print_listDobl(){
	Nodedc<T> *pr;
	pr=prim;
	Nodedc<T> *p;
	for(p=prim->next;!(p==pr);p=p->next){				 
		cout<<p->info << " ";

	}
	cout<<p->info<<endl; 
}
