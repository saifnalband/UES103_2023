/*
topic : String and Pointers
Author : Saif
Organization: TIET, Patiala, India
Date: 21/11/2022
*/
#include <stdlib.h> 
#include <stdio.h>

int main() {
    char str[] = "Thapar.";
    printf("%c\n", *str); // Output: T
    printf("%c\n", *(str + 1)); // Output: h
    printf("%c\n", *(str + 6)); // Output: .
    char * stringPtr;
    stringPtr = str;
    printf("%c\n", *stringPtr); // Output: T
    printf("%c\n", *(stringPtr + 1)); // Output: h
    printf("%c\n", *(stringPtr + 6)); // Output: .
    return 0;
}
