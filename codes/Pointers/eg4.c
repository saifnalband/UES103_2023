/*
topic : generic (void)pointer arithematic+ in memory 
Author : Saif
Organization: TIET, Patiala, India
Date: 21/11/2022
*/
#include<stdio.h>
int main(){
    int a = 1025;
    int *p;
    p = &a;
    printf("size of integers is %d bytes \n", sizeof(int));
    printf("Address : %d, value = %d \n", p, *p);
    void *p0;
    p0 = p; // type casting
    printf("size of char is %d bytes \n", sizeof(char));
    printf("Address p0 : %d, value p0 = %d \n", p0, *p0); // error
    // only address can be printed, no value access 
    // and no arthematic(pointer)
}