#include<stdio.h>
/*
Author : Ansh Bajaj
Roll no : 102319030
*/ 
int main()
{
    int temp,n,nt,i,j,A[] ={ 4, 34, 9, -5, 2, 8, 11, 15, 3}, x;
    //write the code here
    nt = sizeof(A)/sizeof(A[0]);
    for(i = 0; i<nt;i++){
        printf("%d ", A[i]);
    }
    for(i = 0; i<10;i++){
        for(n=8; n>=0; n--){
            if(A[n]> A[n+1]){
                A[n] = A[n+1] + A[n];
                A[n+1] = A[n] - A[n+1];
                A[n] = A[n] - A[n+1];
            }
        }
    }
    printf("\n");
    x = A[1];
    for(i = 0; i<nt;i++){
        printf("%d ", A[i]);
    }
    printf("\n second smallest number : %d", x);
}