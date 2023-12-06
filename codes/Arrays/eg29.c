/*
topic : Array as ADT: Insert at end
Author : Saif
Organization: TIET, Patiala, India
Date: 21/11/2022
*/
// C program to implement insert
#include <stdio.h>

// Inserts a key in arr[] of given capacity.
// n is current size of arr[]. This
// function returns n + 1 if insertion
// is successful, else n.
int insertSorted(int arr[], int n, int key){
	arr[n] = key;
	return (n + 1);
}
void insertArray(int *A, int n){
	int i;
	printf("enter the elements:");
	for (i = 0; i < n; i++){
		scanf("%d", &A[i]);
	}		
}
/* prints out an array on a line */
void printArray(int arr[], int size){
int i;
for (i=0; i < size; i++)
	printf("%d ", arr[i]);
printf("\n");
}
// Driver Code
int main(){
	int n = 0;
	printf("enter the no of elements: \n");
	scanf("%d",n);
	int arr[n+1];
	insertArray(arr,n);
	//int arr[20] = { 12, 16, 20, 40, 50, 70 };
	//int capacity = sizeof(arr) / sizeof(arr[0]);
	//int n = 6;
	int i, key = 26;
	printf("\n Before Insertion: ");
	printArray(arr,n);
	// Inserting key
	n = insertSorted(arr, n, key);
	printf("\n After  Insertion: ");
	printArray(arr,n);
	return 0;
}
