/*
topic : Passing a single array element to a function
Author : Saif
Organization: TIET, Patiala, India
Date: 21/11/2022
*/
#include<stdio.h>
void display(int a);
int main(){
    int myArray[] = { 2, 3, 4 };
    display(myArray[2]); //Passing array element myArray[2] only.
    return 0;
}
void display(int a){
    printf("%d", a);
}