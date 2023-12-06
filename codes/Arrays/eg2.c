/*
topic : Array
Author : Saif
Organization: TIET, Patiala, India
Date: 21/11/2022
*/
#include<stdio.h>
int main(){
    int A[] = {2,44,5,6,90};
    printf("%d\n",A);  // base address
    printf("%d\n", &A[0]); // base address
    printf("%d\n", A[0]); // value
    printf("%d\n", *A); // value

    for (int i = 0; i < 5; i++){
        /* code */
        printf("Address = %d\n", &A[i]);
        printf("Address = %d\n", A+i);
        printf("value = %d\n", A[i]);
        printf("Value = %d\n", *(A+i));
    } 
}