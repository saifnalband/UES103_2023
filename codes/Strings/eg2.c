/*
topic : String III
Author : Saif
Organization: TIET, Patiala, India
Date: 21/11/2022
*/
#include<stdio.h>
#include<string.h>
void print(const char* C){
    int i = 0;
    // C[0] = 'D'; // compile error
    while (C[i] != '\0'){ // *(C+i) // *C
        /* code */
        printf("%c", C[i]);
        i++;                        // C++;
    }
    printf("\n");
    printf("length of string:%d",i);
}
int main(){
    char C[20] = "Hello";// string get stored in the space for array (stack)
    char *D = "World"; //string gets stored as compile time constant
    // D[0] = 'H'; error
    print(C);
}