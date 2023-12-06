/*
topic : pointer arithematic+ in memory 
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
    char *p0;
    p0 = (char*)p; // type casting
    printf("size of char is %d bytes \n", sizeof(char));
    printf("Address p0 : %d, value p0 = %d \n", p0, *p0);
    // 1025 =  00000000 00000000 00000100 00000001
    printf("size of char is %d bytes \n", sizeof(char));
    printf("Address p0+1 : %d, value p0+1 = %d \n", p0+1, *(p0+1));
}