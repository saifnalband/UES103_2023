/*
 * Created on Mon Dec 12 2022
 *
 * Copyright (c) 2022 Your Company
 */
#include<stdio.h>
int main( ) { 
    int arr[] = { 10, 20, 30, 45, 67, 56, 74 }; 
    int *i, *j;
    i = &arr[1]; 
    j = &arr[2]; 
    printf("%d %d", j-i, *j-*i);
}