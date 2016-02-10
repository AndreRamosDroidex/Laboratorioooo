#ifndef INT_LINKEDC_LIST
#define INT_LINKEDC_LIST
template<class T>
class Nodc{
	public:
	     	T info;
     		Nodc<T> *next;
     		Nodc(const T&el, Nodc *ptr= 0){
	         	info=el;next=ptr;
	    	 }



	};
template<class T>
class IntSLLis{
	public:
		IntSLLis(){
		  prim=actual=0;
		}
                ~IntSLLis();
		
		void print_list();
		void addToActual(const T&);
		void deleteNode(const T&);
	private:
		Nodc<T>  *actual,*prim;

        };
	#endif
