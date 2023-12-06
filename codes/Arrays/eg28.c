/*
 * Filename: d:\TIET\OddSem\UTA003\Examples\Arrays\eg28.c
 * Path: d:\TIET\OddSem\UTA003\Examples\Arrays
 * Created Date: Monday, December 12th 2022, 9:18:06 pm
 * Author: Administrator
 * Dynamic array
 * Copyright (c) 2022 Your Company
 */
#include<stdio.h>
#include<stdlib.h>
/* prints out an array on a line */
void printArray(int arr[], int size){
int i;
for (i=0; i < size; i++)
	printf("%d ", arr[i]);
printf("\n");
}
int main(){
    int n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    //int *A = (int *)malloc(n*sizeof(int)); // dynamic alloacted array
    int *A = (int *)calloc(n,sizeof(int)); // dynamic alloacted array
    //  for(int i = 0; i<n;i++){
    //      A[i] = i + 1;
    //  }
    printArray(A,n);
    free(A);
    A[1] = 30;
    printArray(A,n);
}