#include <iostream>
#include <fstream>
#include "heapsort.h"
#include <vector>

using namespace std;

void imprimir(vector<int> a){
    for (int i=a.size()-1;i>=0;i--) {
        cout<<a[i]<<" ";  
   }
}

int main() {
    static const int a[] = {0,3,1,200,5,7,600,8};
    vector<int> v(a,a+sizeof(a)/sizeof(int));
    vector<int> out = heapsort(v);
    imprimir(out);
    
    cout<<endl;
    return 0;
}
