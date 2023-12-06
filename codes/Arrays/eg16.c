/*
topic : pointer arithematic
Author : Saif
Organization: TIET, Patiala, India
Date: 30/11/2022
*/
#include<stdio.h>
int main(){
    int C[3][2] = {{2,5},{3,4},{5,6}};
    printf(" %d\n %d\n %d\n %d\n", C, *C, C[0], &C[0][0]);
}