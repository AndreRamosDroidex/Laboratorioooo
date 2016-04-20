#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <math.h>

using namespace std;

#define SZ 8

using namespace std;


void imprimir(double A[][SZ], int n) {
    int i, j;
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++)
            cout<<A[i][j]<<" ";
        cout<<"\n"; 
    }
}

void resta_matriz(double A[][SZ], double B[][SZ], double resultado[][SZ], int n) {
    int i, j;
    for(i=0; i< n; i++) {
        for(j=0; j<n; j++)  resultado[i][j] = A[i][j] - B[i][j];
    }
}

void suma_matriz(double A[][SZ], double B[][SZ], double resultado[][SZ], int n) {
    int i, j;
    for(i=0; i< n; i++) {
        for(j=0; j<n; j++)  resultado[i][j] = A[i][j] + B[i][j];
    }
}



void strassen(double A[][SZ], double B[][SZ], double C[][SZ], int n) {
    
    if(n== 1) {
        C[0][0] = A[0][0] * B[0][0];
        return;
    }
    else{
        int divide_  =(n/2),i,j;
        double A11[SZ][SZ], A12[SZ][SZ], A21[SZ][SZ], A22[SZ][SZ],B11[SZ][SZ], B12[SZ][SZ], B21[SZ][SZ], B22[SZ][SZ], C11[SZ][SZ], C12[SZ][SZ], C21[SZ][SZ], C22[SZ][SZ];
        double P1[SZ][SZ], P2[SZ][SZ], P3[SZ][SZ], P4[SZ][SZ], P5[SZ][SZ], P6[SZ][SZ], P7[SZ][SZ];
        double AResultado[SZ][SZ], BResultado[SZ][SZ];
        
        for (i = 0; i < divide_; i++){
            for (j = 0; j < divide_; j++) {
                A11[i][j] = A[i][j];
                A12[i][j] = A[i][j + divide_];
                A21[i][j] = A[i + divide_][j];
                A22[i][j] = A[i + divide_][j + divide_];
                
                B11[i][j] = B[i][j];
                B12[i][j] = B[i][j + divide_];
                B21[i][j] = B[i + divide_][j];
                B22[i][j] = B[i + divide_][j + divide_];
            }
        }
        
        suma_matriz(A11, A22, AResultado, divide_);   
        suma_matriz(B11, B22, BResultado, divide_);  
        strassen(AResultado, BResultado, P1, divide_);  
        
        suma_matriz(A21, A22, AResultado, divide_);   
        strassen(AResultado, B11, P2, divide_); 
        
        resta_matriz(B12, B22, BResultado, divide_); 
        strassen(A11, BResultado, P3, divide_); 
        
        resta_matriz(B21, B11, BResultado, divide_); 
        strassen(A22, BResultado, P4, divide_); 
        
        suma_matriz(A11, A12, AResultado, divide_); 
        strassen(AResultado, B22, P5, divide_); 
        
        resta_matriz(A21, A11, AResultado, divide_);
        suma_matriz(B11, B12, BResultado, divide_); 
        strassen(AResultado, BResultado, P6, divide_); 
        
        resta_matriz(A12, A22, AResultado, divide_); 
        suma_matriz(B21, B22, BResultado, divide_); 
        strassen(AResultado, BResultado, P7, divide_); 
        

        
        suma_matriz(P3, P5, C12, divide_); 
        suma_matriz(P2, P4, C21, divide_); 
        
        suma_matriz(P1, P4, AResultado, divide_); 
        suma_matriz(AResultado, P7, BResultado, divide_); 
        resta_matriz(BResultado, P5, C11, divide_); 
        
        suma_matriz(P1, P3, AResultado, divide_); 
        suma_matriz(AResultado, P6, BResultado, divide_); 
        resta_matriz(BResultado, P2, C22, divide_); 
        
        for (i = 0; i < divide_ ; i++)   {
            for (j = 0 ; j < divide_ ; j++)  {
                C[i][j] = C11[i][j];
                C[i][j + divide_] = C12[i][j];
                C[i + divide_][j] = C21[i][j];
                C[i + divide_][j + divide_] = C22[i][j];
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    double C[SZ][SZ];
    int i,j;
    int n,m,cont = 0;
    n=5; m = n;
    double A[SZ][SZ] = {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5},{1, 2, 3, 4, 5},{1, 2, 3, 4, 5}};
    double B[SZ][SZ] = {{3, 1, 1, 2, 1}, {5, 1, 12, 1, 1}, {1, 8, 1, 1, 1},{1, 6, 2, 4, 3},{1, 8, 2, 7, 1}};
    
    
    if(m > 1) {
        while(m>=2) {
            m/=2;
            cont++;
        }
        m = n;
        if(m != (pow(2.0,cont))) {
            n = pow(2.0,cont+1);
            for(i=0; i<n; i++)  {
                for(j=0; j<n; j++)  {
                    if((i>=m) || (j>=m))    {
                        A[i][j] = 0.0;
                        B[i][j] = 0.0;
                    }}}}}
    strassen(A,B,C,n);
    
    imprimir(A,m);
    cout<<endl;
    imprimir(B,m);
    cout<<endl;
    imprimir(C,m);
    cout<<endl;
    return 0;
}
