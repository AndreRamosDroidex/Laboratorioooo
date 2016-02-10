/*#ifndef LISTASCICL_H_INCLUDED
#define LISTASCICL_H_INCLUDED
class IntNode{
	public:
	     	int info;
     		IntNode *next;
     		IntNode(int el, IntNode *ptr= 0){
	         	info=el;next=ptr;
	    	 }



	};
class IntSLList{
	public:
		IntSLList(){
		  tail=0;
		}
        ~IntSLList();
		int isEmpty(){
		  return tail==0;
		}
		void addToTail(int);
		void deleteNode(int);
		bool isInList(int) const;
	private:
		IntNode  *tail;

        };
#endif // LISTASCICL_H_
*/
