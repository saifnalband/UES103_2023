/*
topic : pointer arithematic
Author : Saif
Organization: TIET, Patiala, India
Date: 4/12/2022
*/
#include<stdio.h>
void printArray(int arr[], int size);
int removeDup(int A[], int n){
    int k,i = 0;
    while (i <= n){
        int j = i + 1;
        while (j <= n){
            if (A[i] == A[j]){
                // Shifting elements one to the left,
                // hence, deleting element at pos j
                for (k = j;j<=n-1;j++){
                    printf("deleting A[%d]: %d \n",k,A[k] );
                    A[k] = A[k+1];
                    //printf("A[%d]: %d \n", k, A[k]);
                }               
                printArray(A,n);
                n = n - 1;
                printf("size of n = %d\n", n);
            }
            else{
                j = j + 1;
            } 
        }
        i = i + 1;
    }
    return n+1;
}
/* prints out an array on a line */
void printArray(int arr[], int size){
int i;
for (i=0; i < size; i++)
	printf("%d ", arr[i]);
printf("\n");
}
/* Driver function to test above functions */
int main(){
	int arr[] =  {1,2,1,1,2,3};
	int n = sizeof(arr) / sizeof(arr[0]);
	printArray(arr, n);
	n = removeDup(arr,n);
	printf("Reversed array is \n");
	printArray(arr, n);
	return 0;
}

