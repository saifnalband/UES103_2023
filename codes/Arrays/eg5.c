/*
topic : Array as ADT: Delete
Author : Saif
Organization: TIET, Patiala, India
Date: 21/11/2022
*/
// C program to implement delete operation in a
// unsorted array
#include <stdio.h>
#include<stdlib.h>
// Driver's code
int main(){
	int i,pos;
	int arr[] = { 10, 50, 30, 40, 20 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 30;
	printf("Array before deletion\n");
	for (pos = 0; pos < n; pos++)
		printf("%d ", arr[pos]);	
	// delete the element
    printf("\n-------------------\n");
    for (pos = 0; pos < n; pos++){
        printf("%d ", arr[pos]);
		if (arr[pos]==key){
			printf(" element found at : %d", pos);
            break;
        }
        else
            printf("Element not found : \n");
    }
    // deleting the element
    for (i = pos; i < n - 1; i++)
		arr[i] = arr[i + 1];
	printf("\nArray after deletion\n");
	for (i = 0; i < n-1; i++)
		printf("%d ", arr[i]);
	return 0;
}
