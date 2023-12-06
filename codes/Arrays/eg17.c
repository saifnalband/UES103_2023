/*
topic : pointer arithematic
Author : Saif
Organization: TIET, Patiala, India
Date: 30/11/2022
*/
#include<stdio.h>
int main(){
    int arr[3][3];
    int i, j;
    printf("Enter 3*3 Matrix: ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nThe Matrix is:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}