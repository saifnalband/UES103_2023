/*
topic : pointer arithematic: call by reference
Author : Saif
Organization: TIET, Patiala, India
Date: 21/11/2022
*/
#include<stdio.h>
void call_value(int *a);
int main(){
    int a = 10;
    printf("Value of a: %d, address of a: %p\n", a, &a);
    call_value(&a);    
    printf(" In main function again\n");
    printf("Value of a: %d, address of a: %p\n", a, &a);
}
void call_value(int *a){
    printf(" In call_value function\n");
    *a = (*a) + 1;
    printf("Value of a: %d, address of a: %p\n", *a, a);
}