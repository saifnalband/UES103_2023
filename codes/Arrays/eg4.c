/*
topic : passing array to function 1
Author : Saif
Organization: TIET, Patiala, India
Date: 21/11/2022
*/
#include<stdio.h>
int sum_of_elements(int A[], int size);
int main(){
    int A[] = {1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);
    printf("-----in main function-----\n");
    printf("Address: %d\n",A);  // base address
    printf("Address: %d\n", &A[0]); // base address
    printf("Value: %d\n", A[0]); // value
    printf("Value: %d\n", *A); // value
    int total = sum_of_elements(A,size);
    printf("SUm of elements:%d",total);
}
int sum_of_elements(int A[], int size){
    int i, sum = 0;
    printf("-----in sum_of_element function-----\n");
    printf("Address: %d\n",A);  // base address
    printf("Address: %d\n", &A[0]); // base address
    printf("Value: %d\n", A[0]); // value
    printf("Value: %d\n", *A); // value
    for(i = 0; i<size; i++){
        sum+=A[i];
    }
    return sum;
}