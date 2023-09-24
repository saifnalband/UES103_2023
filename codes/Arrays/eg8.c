/*
topic : Array merge 2 array
Author : Saif
Organization: TIET, Patiala, India
Date: 13/09/2023
Program: To sort the array
*/

#include <stdio.h>

int main(){
    int arr[] = {30, 66, 76, 89, 67, 82, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i, j, temp;
    printf("------ array before sorting -------\n");
    for(i = 0; i<=size; i++)
        printf("%d ", arr[i]);
    printf("\n Now doing Sorting.....\n");
    for(i=0;i<size; i ++){
        for(j=0; j<size-i; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("------ array after sorting -------\n");
    for(i = 0; i<=size; i++)
        printf("%d ", arr[i]);
    
}