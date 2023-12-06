/*
topic : Strings : declaration eg
Author : Saif
Organization: TIET, Patiala, India
Date: 21/11/2022
*/
#include<stdio.h>
int main(){
    char *myStr = "Hello";
    printf("%s\n", myStr);
    myStr[0] = 'A';
    printf("%s", myStr);
}