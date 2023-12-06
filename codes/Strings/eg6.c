/*
topic : Strings: declaration eg
Author : Saif
Organization: TIET, Patiala, India
Date: 21/11/2022
*/
#include<stdio.h>
#include<string.h>
int main(){
    char *otherStr = "Hi";
    char *myStr = otherStr;
    printf("%s", myStr);
    myStr[0] = 'A';
    printf("%s", myStr);
}