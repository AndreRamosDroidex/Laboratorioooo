
#include "heap_sort.h"

class priorityq {
public:
    myheap h;
    void insert(int i);
    int maximum();
    int extractMax();
    void increaseKey(int i, int k);
};
 
void priorityq::insert(int i) {
    h.heapsize++;
    h.array.push_back(i);
 
    int j = h.heapsize;
    while (parent(j)>0 && h.array[parent(j)]<h.array[j]) {
        swap(h.array[parent(j)],h.array[j]);
        j = parent(j);
    }   
}
 
int priorityq::maximum() {
    if (h.heapsize <= 0) return -1;
    return h.array[1];
}
 
int priorityq::extractMax() {
    if (h.heapsize <= 0) return -1;
    int out = h.array[1];
    swap(h.array[1], h.array[h.heapsize]);
    h.heapsize--;
    h.heapify(1);
    return out;
}
 
void priorityq::increaseKey(int i, int k) {
    h.array[i] = k;
    while (parent(i)>0 && h.array[parent(i)]<h.array[i]) {
        swap(h.array[parent(i)],h.array[i]);
        i = parent(i);
    }
}
