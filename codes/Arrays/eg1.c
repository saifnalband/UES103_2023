#include<stdio.h>
int main(){
    int A[10];
    int arr[] = {1,2,3,4,5,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("--------------------------\n");
    for(int i = 0; i < size; ++i){
        printf("%d\n", arr[i]);
    }
    arr[size] = 100;
    printf("Second time--------------------------\n");
    for(int i = 0; i < size+1; ++i){
        printf("%d\n", arr[i]);
    }
}