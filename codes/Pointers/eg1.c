/*
topic : pointer arithematic
Author : Saif
Organization: TIET, Patiala, India
Date: 21/11/2022
*/
#include<stdio.h>
int main(){
    int a = 10;
    int *p;
    p = &a; 
    printf("address of P is %d \n",p);
    printf("size of integers is %d bytes\n", sizeof(int));
    printf("address at P+1: %d \n", p+1);
    printf("address at P+2: %d \n", p+2);
    printf("address of P is %d \n",p);
    printf("Value at P: %d \n", *p);
    printf("address at P+1: %d \n", p+1);
    printf("Value at P+1: %d \n", *(p+1));
}