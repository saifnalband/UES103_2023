#include<stdio.h>
int main(){
    int weight = 75;
    while(weight > 65){
        printf("you weight is large \n");
        printf(" Exersie and come back \n");
        printf("enter the new weight");
        scanf("%d",&weight);
    }
    printf(" you are fit now \n");
    printf("out of while loop");
}