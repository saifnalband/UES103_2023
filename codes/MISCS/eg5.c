/*
 * Created on Fri Dec 23 2022
 *
 * Copyright (c) 2022 Your Company
 */
#include<stdio.h>
int AddArray(int *, int);
void printArr(int *, int);
int main(){
	int a[]={10, 20, 30, 40, 50, 60, 5},size=0, sum;
    size = sizeof(a)/sizeof(a[0]);
	printArr(a,size);
	sum = AddArray(a,size);
    printf("Sum is : %d",sum);
}
int AddArray(int *p,int n){
	if (n == 1)
		return *p;
	return *(p+(n-1)) + AddArray(p,n-1);
}
void printArr(int *arr, int n){
	int i;
	printf("the array is : \n");
	for(i=0;i<n;i++,arr++){
		printf("%d ",*arr);
	}
	printf("\n");
}