#ifndef COLAS_LIST
#define COLAS_LIST
template<class T>

class Nodco{
	public:
	     	T info;
     		Nodco<T> *next;
     		Nodco(const T&el, Nodco *ptr= 0){
	         	info=el;next=ptr;
	    	 }



	};
template<class T>
class Cola{
	public:
		Cola(){
		  primero=ultimo=0;
		}
                ~Cola();
		T isEmpty(){
		  return primero==0;
		}
		//void print_cola();
		void push(const T&);
		void pop();
		//T* deleteFromHead();
		//T deleteFromTail();
		//void deleteNode(const T&);
		//bool isInList(const T&) const;
	private:
		Nodco<T>  *ultimo,*primero;

        };
	#endif
