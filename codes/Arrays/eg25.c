#include <stdio.h>
/* prints out an array on a line */
void printArray(int arr[], int size){
int i;
for (i=0; i < size; i++)
	printf("%d ", arr[i]);
printf("\n");
}
int del_ArrayElement(int A[], int n){
    int c;
    int i = 0;
    printf("In Del Operation------\n");
    while (i<n){
        /* code */
        int j = i + 1;
        while (j < n){
            /* code */
            if (A[i] == A[j]){
                for ( c = j ; c < n -1 ; c++ ){
                    A[c] = A[c+1];
                    printArray(A,n);
                    printf("size of C : %d\n",c);
                }
                n = n-1;
                printf("size of n : %d\n",n);
            }
            else{
                j = j + 1;
            }
        }
        i = i + 1;
    } 
    return n;   
}
int main(){
    int position, c, n;   
    int arr[] =  {10,20,20,30,30,40,50,50}; //{1,2,1,1,2,3};  
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