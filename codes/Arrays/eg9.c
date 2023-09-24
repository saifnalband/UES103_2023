/*
topic : Array merge 2 array
Author : Saif
Organization: TIET, Patiala, India
Date: 13/09/2023
Program: To sort the array and perform Binary Search
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
    // perform Binary Search
    int n=6,beg=0,end=n-1,result=-1,mid,x;
    printf("\n What element do you want to search? ");
    scanf("%d",&x);
    while(beg<=end){
        mid=(beg+end)/2;
        if(arr[mid]<=x) {
            beg = mid+1; 
            result = mid;
        }
        else 
            end = mid-1;
    }
    if(arr[result]==x) 
        printf("\nFound");
    else 
        printf("\nNot found");
    return 0;
}