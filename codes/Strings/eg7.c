/*
topic : Strings: declaration eg
Author : Saif
Organization: TIET, Patiala, India
Date: 21/11/2022
*/
#include<stdio.h>
int main(){
    char *str = "apple";		// e.g. 0xfff0
    char *str2 = "apple 2";		// e.g. 0xfe0
    str = str2;	// ok!  Both store address 0xfe0
    printf("%s \n",str);
    printf("%s",str2);
}