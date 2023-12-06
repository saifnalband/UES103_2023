#include <stdio.h>
int main(){
    int arr1[100];
    int i, max, min, n;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);
    printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++){
        printf("element - %d : ",i);
        scanf("%d",&arr1[i]);
    }
    max = arr1[0];
    min = arr1[0];
    //finding max
    for(i=1; i<n; i++){
        if(arr1[i]>max){
            max = arr1[i];
        }
        //finding min
        if(arr1[i]<min){
            min = arr1[i];
        }
    }
    printf(" the min number: %d and Maximun Number: %d ", min, max);
}