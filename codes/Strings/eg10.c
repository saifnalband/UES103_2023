/*
 * Created on Wed Dec 07 2022
 *
 * Copyright (c) 2022 Your Company
 */
/*
topic : passing String to function
Author : Saif
Organization: TIET, Patiala, India
Date: 21/11/2022
*/
#include <stdio.h>
void pointer(char * str) {
  printf("In pointer Function the address of str: %d \n", str);
  printf("The string is : ");
  puts(str);
  printf("\n");
}
void array(char str[]) {
  printf("In array Function the address of str: %d \n", str);
  printf("The string is : ");
  puts(str);
  printf("\n");
}
int main() {
  char str[25] = "This is C Programming";
  printf("In Main Function the address of str: %d \n", str);
  pointer(str);
  array(str);
  return 0;
}
