/*
topic : pointer 
Author : Saif
Organization: TIET, Patiala, India
Date: 21/11/2022
*/
#include<stdio.h>
int main(){
    int a = 10;
    int *p;
    p = &a; 
    // can be written as int* p correct
    // int *p = &a; 
    printf("%d \n",p);
    printf(" %d \n", *p);
    printf("%d \n", &a);
    printf("address of P is %d \n",p);
    printf(" Value at P: %d \n", *p);
    *p = 20;
    printf("a: %d \n", a);
    int b = 30;
    *p = b; // change of address ?
    printf("address of P is %d \n",p);
    printf(" Value at P: %d \n", *p);
}