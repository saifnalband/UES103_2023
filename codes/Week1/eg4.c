#include<stdio.h>
int main(){
    int i;
    for(i=0;i<10;i++){
        //printf("%d. hello world \n",i);
        if(i%2==0){
            printf(" %d ",i);
        }
    }
    printf("\n");
    for(i=0;i<10;i++){
        //printf("%d. hello world \n",i);
        if(i%2!=0){
            printf(" %d ",i);
        }
    }
    //printf("%d",i);
}