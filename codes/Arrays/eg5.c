/*
topic : passing array to function 1
Author : Saif
Organization: TIET, Patiala, India
Date: 21/11/2022
*/
#include<stdio.h>
int sum_of_elements(int A[]);
int main(){
    int A[] = {1,2,3,4,5};
    int total = sum_of_elements(A);
    printf("SUm of elements:%d",total);
}
int sum_of_elements(int A[]){
    int i, sum = 0;
    int size = sizeof(A)/sizeof(A[0]);
    printf("in function:: size:%d\n", size);
    printf("in function:: Size of A = %d, size of A[0] = %d \n", sizeof(A), sizeof(A[0]));
    for(i = 0; i<size; i++){
        sum+=A[i];
    }
    return sum;
}