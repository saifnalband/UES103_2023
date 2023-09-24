#include<stdio.h>
int main(){
    float a,b,c;
    printf("enter the value of a b c \n");
    scanf(" %f %f %f ", &a,&b,&c);
    float sum = (a * b * c)/100;
    printf("the value of sum %f",sum );
    return 0; 
}