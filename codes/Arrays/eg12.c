/*
topic : Array as ADT: Delete
Author : Saif
Organization: TIET, Patiala, India
Date: 21/11/2022
*/
// C program to implement delete operation in a
// unsorted array
#include <stdio.h>

// To search a key to be deleted
int findElement(int arr[], int n, int key);

// Function to delete an element
int deleteElement(int arr[], int n, int key){
	// Find position of element to be deleted
	int pos = findElement(arr, n, key);
	if (pos == -1) {
		printf("Element not found");
		return n;
	}
	// Deleting element
	int i;
	for (i = pos; i < n - 1; i++)
		arr[i] = arr[i + 1];
	return n - 1;
}

// Function to implement search operation
int findElement(int arr[], int n, int key){
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == key)
			return i;
	return -1;
}

// Driver's code
int main(){
	int i;
	int arr[] = { 10, 50, 30, 40, 20 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 30;
	printf("Array before deletion\n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);	
	// Function call
	n = deleteElement(arr, n, key);
	printf("\nArray after deletion\n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return 0;
}
