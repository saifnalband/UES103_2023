/*
 * Created on Sat Dec 24 2022
 *
 * Copyright (c) 2022 Your Company
 */
#include<stdio.h>
#include<string.h>
  
/* Function to print reverse of the passed string */
void reverseArr(char *str, int index, int n)
{
    if(index == n)   // return if we reached at last index or at the end of the string
    {
        return;
    }
    char temp = str[index]; // storing each character starting from index 0 in function call stack;
    reverseArr(str, index+1, n); // calling recursive function by increasing index everytime
    printf("%c", temp);          // printing each stored character while recurring back
}
/* Function to print reverse of the passed string using pointers */
void reversePT(char *str, int index, int n)
{
    if(index == n)   // return if we reached at last index or at the end of the string
    {
        return;
    }
    char temp = *str; 
    *str++;
    reversePT(str, index+1, n); // calling recursive function by increasing index everytime
    printf("%c", temp);          // printing each stored character while recurring back
}
  
/* Driver program to test above function */
  
int main() { 
    //char a[] = "Hello World";
    //int n = sizeof(a) / sizeof(a[0]);
    //reverseArr(a, 0, n);
    char s[100];
    int n;
    printf("\nEnter a string : ");
    gets(s);
    n = strlen(s);
   //printf("size od STR: %d\n",size);
    reversePT(s, 0, n);
    return 0;
}