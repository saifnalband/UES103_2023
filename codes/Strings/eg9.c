/*
topic : String for reading lines I
Author : Saif
Organization: TIET, Patiala, India
Date: 21/11/2022
*/
#include <stdlib.h>
#include <stdio.h>

int main() {
    char str[30];
    printf("Enter string: ");
    // fgets(name_of_string, number_of_characters, stdin);
    fgets(str, sizeof(str), stdin);
    printf("The string is:");
    puts(str);
  return 0;
}
