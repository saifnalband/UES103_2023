/*
topic : pointer arithematic
Author : Saif
Organization: TIET, Patiala, India
Date: 21/11/2022
*/
#include<stdio.h>
int main(){
    int x = 5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    int ***r = &q;
    printf("value of p: %d \n", *p);
    printf("address of P :%d \n", p);
    printf("%d \n", *q); //&p
    printf("%d \n", *(*q));
    printf("%d \n", *(*r));
    printf("%d \n", *(*(*r)));
    ***r = 100;
    printf("value of x: %d\n",x);
}