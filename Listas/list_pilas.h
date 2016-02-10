#ifndef PILAS_LIST
#define PILAS_LIST
#include <string.h>
template<class T>

class Nodp{
	public:
	     	T info;
     		Nodp<T> *next;
     		Nodp(const T&el, Nodp *ptr= 0){
	         	info=el;next=ptr;
	    	 }



	};
template<class T>
class Pila{
	public:
		Pila(){
		  primero=ultimo=0;
		}
                ~Pila();
		T isEmpty(){
		  return primero==0;
		}
		void print_pila();
		void push(const T&);
		void pop();
		void push_pref();
		//void separa_pref(char);
		//T* deleteFromHead();
		//T deleteFromTail();
		//void deleteNode(const T&);
		//bool isInList(const T&) const;
	private:
		Nodp<T>  *ultimo,*primero;

        };
	#endif
