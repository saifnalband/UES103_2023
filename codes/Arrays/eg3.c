/*
topic : Array
Author : Saif
Organization: TIET, Patiala, India
Date: 21/11/2022
*/
#include<stdio.h>
int main(){
    int A[] = {2,44,5,6,90};
    int *p = A; // valid
    // A++ not valid, p++; valid
    for (int i = 0; i < 5; i++){
        /* code */
        printf("%d )Address = %d\n",i, &A[i]);
        printf("%d )Address = %d\n",i, A+i);
        printf("%d )value = %d\n",i, A[i]);
        printf("%d )Value = %d\n",i, *(A+i));
    } 
}