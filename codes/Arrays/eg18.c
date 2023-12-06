/*
topic : pointer arithematic
Author : Saif
Organization: TIET, Patiala, India
Date: 21/11/2022
*/
#include<stdio.h>
void BubbleSort(int A[],int n);
int main(){
    int i, A[] = {5,3,2,1,8};
    int size = sizeof(A)/sizeof(A[0]);
    printf("-----Before sorting:---- \n");
    for(i=0;i<size;i++){
        printf("%d ", A[i]);
    } 
    BubbleSort(A,size);
    printf("\n------After sorting:-----\n");
    for(i=0;i<size;i++){
        printf("%d ", A[i]);
    }    
}
void BubbleSort(int *A, int n){ // A[] == A* in function 
    int i, j, temp;
    for(i=0; i<n; i++) // # of passes
        for(j=0;j<n-1; j++){
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
}