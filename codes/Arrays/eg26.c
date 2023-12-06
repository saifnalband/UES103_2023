#include <stdio.h>
/* prints out an array on a line */
void printArray(int arr[], int size){
int i;
for (i=0; i < size; i++)
	printf("%d ", arr[i]);
printf("\n");
}
int del_ArrayElement(int A[], int size){
    int c;
    int i,j,k;
    printf("In Del Operation------\n");
    // use nested for loop to find the duplicate elements in array  
    for ( i = 0; i < size; i ++){  
        for ( j = i + 1; j < size; j++){  
            // use if statement to check duplicate element  
            if ( A[i] == A[j]){  
                // delete the current position of the duplicate element  
                for ( k = j; k < size - 1; k++){  
                    A[k] = A[k + 1];  
                }  
                // decrease the size of array after removing duplicate element  
                size--;     
            // if the position of the elements is changes, don't increase the index j  
                j--;      
            }  
        }  
    }
    return size;    
}
int main(){
    int position, c, n;   
    int arr[] =  {10,20,20,30,30,40,50,50}; //{1,2,1,1,2,3,1};//  
	n = sizeof(arr) / sizeof(arr[0]);
    printf("the size of array: %d \n", n);
	printArray(arr, n);  
    n = del_ArrayElement(arr, n);
    printf("the size of array after removing: %d \n", n);          
    printf("Resultant array is\n");
    //n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    return 0;
}