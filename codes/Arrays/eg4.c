/*
topic : Array as ADT: Insert at end
Author : Saif
Organization: TIET, Patiala, India
Date: 13/09/2023
*/
// C program to implement insert
#include <stdio.h>
int main(){
	int arr[20] = { 12, 16, 20, 40, 50, 70 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int n = 6;
	int i, key = 26;
	printf("\n Before Insertion: ");
    for (i=0; i < size; i++)
	    printf("%d ", arr[i]);
    printf("\n--------------------------");
	// Inserting key
    if (n >= size)
		printf("Can not insert with given size");
	arr[size] = key;
	printf("\n After  Insertion: ");
	for (i=0; i < size+1; i++)
	    printf("%d ", arr[i]);
    printf("\n---------------------------");
	return 0;
}
