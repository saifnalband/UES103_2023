/*
topic : Array as ADT: Insert at Position
Author : Saif
Organization: TIET, Patiala, India
Date: 21/11/2022
*/
// C Program to Insert an element
// at a specific position in an Array

#include <stdio.h>
// Function to insert element
// at a specific position
void insertElement(int arr[], int n, int x, int pos)
{
	// shift elements to the right
	// which are on the right side of pos
	for (int i = n - 1; i >= pos; i--)
		arr[i + 1] = arr[i];
	arr[pos] = x;
}
// Driver's code
int main(){
	int arr[15] = { 2, 4, 1, 8, 5 };
	int n = 5;
	printf("Before insertion : ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	int x = 10, pos = 2;
	// Function call
	insertElement(arr, n, x, pos);
	n++;
	printf("After insertion : ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return 0;
}
