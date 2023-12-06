/*
 * Created on Mon Dec 12 2022
 *
 * Copyright (c) 2022 Your Company
 */
#include<stdio.h>
int main() { 
    int v[3] = {10, 100, 200},i; 
    int *ptr; 
    ptr = v; 
    for(i = 0; i < 3; i++) { 
        printf("*ptr = %d\n", *ptr); 
        printf("ptr = %u\n", ptr); 
        ptr++; 
    }
    return 0; 
}