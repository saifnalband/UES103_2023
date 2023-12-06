/*
topic : Array as ADT: Search(Linear)
Author : Saif
Organization: TIET, Patiala, India
Date: 21/11/2022
*/
#include <stdio.h>
// Function to implement search operation
int findElement(int arr[], int n, int key){
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == key)
			return i;	
	// If the key is not found
	return -1;
}

// Driver's Code
int main(){
	int arr[] = { 12, 34, 10, 6, 40, 56, 10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	// Using a last element as search element
	int key = 10;
	// Function call
	int position = findElement(arr, n, key);
	if (position == -1)
		printf("Element not found");
	else
		printf("Element Found at Position: %d",
			position + 1);
	return 0;
}
