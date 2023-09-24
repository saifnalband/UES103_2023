#include<stdio.h>
int main(){
    int weight = 75;
    do{
        printf("you weight is large \n");
        printf(" Exersie and come back \n");
        printf("enter the new weight");
        scanf("%d",&weight);
    }while(weight > 65);
    //printf(" you are fit now \n");
    printf("your weight is :%d \n", weight);
    printf("out of while loop");
}