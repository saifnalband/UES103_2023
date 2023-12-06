#include <stdio.h>

/* prints out an array on a line */
void printArray(int arr[], int size){
int i;
for (i=0; i < size; i++)
	printf("%d ", arr[i]);
printf("\n");
}
int del_ArrayElement(int A[], int n, int position){
    int c;
    for ( c = position - 1 ; c < n - 1 ; c++ ){
        A[c] = A[c+1];
        printArray(A,n);
    } 
    return n-1;   
}
int main(){
    int position, c, n;   
    int arr[] =  {1,2,3,4,5,6};
	n = sizeof(arr) / sizeof(arr[0]);
    printf("the size of array: %d \n", n);
	printArray(arr, n);  
    printf("Enter the location where you wish to delete element\n");
    scanf("%d", &position); 
    if ( position >= n+1 )    
    printf("Deletion not possible.\n");  
    else
    {    
       n = del_ArrayElement(arr, n, position);          
    }
    printf("Resultant array is\n");
    //n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    return 0;
}