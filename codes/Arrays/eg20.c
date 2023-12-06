/*
topic : pointer arithematic
Author : Saif
Organization: TIET, Patiala, India
Date: 21/11/2022
*/
#include<stdio.h>
int main(){
    int i,j;
    int arr[2][2] = {{1,2}, {3,4}};
    //int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("a[%d][%d]:%d\t",i,j, arr[i][j]);
        }
        printf("\n");
    }
    
}