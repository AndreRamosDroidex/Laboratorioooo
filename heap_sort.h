#include <vector>
#include <iostream>



using namespace std;

class myheap {
public:
	vector<int> array;
	int heapsize;
	void heapify(int i);
	void buildheap(vector<int> v);
	int left(int i);
	int right(int i);
	int parent(int i);
	void printheap() {
		cout<<"current heap: ";
		for (int i=1;i<=heapsize;i++) {
			cout<<array[i]<<" ";
		}
		cout<<endl;
	}
};

int myheap::left(int i){
	return  i*2;
}

int myheap::right(int i){
	return  i*2+1;
}
int myheap::parent(int i){
	return  i/2;
}
void myheap::heapify(int i)
{
	int maxi = i;
	if (left(i)<=heapsize && array[i]<array[left(i)]) {
		maxi = left(i);
	}
	if (right(i)<=heapsize && array[maxi]<array[right(i)]) {
		maxi = right(i);
	}
	if (maxi != i) {
		swap(array[i],array[maxi]);
		//printheap();
		heapify(maxi);
	}
}

void myheap::buildheap(vector<int> v)
{
	array = v;
	array.insert(array.begin(),0);
	heapsize = array.size()-1;
	for (int i=heapsize/2; i>=1; i--) {
		// cout<<"heapify "<<i<<endl;
		heapify(i);
	}
}

vector<int> heapsort(vector<int> vi) {
	myheap h;
	h.buildheap(vi);
	//h.printheap();
	vector<int> out;
	vector<int > result;
	while (h.heapsize>0) {
		result.push_back(h.array[1]);
		out.push_back(h.array[1]);
		swap(h.array[1],h.array[h.heapsize]);
		h.heapsize--;
		h.heapify(1);
		//h.printheap();
	}
	return result;
}
