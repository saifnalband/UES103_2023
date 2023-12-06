#include<stdio.h>
int main(){
    int i, j, k;
    char c;
    for(j = 65; j<=71; j=j+1){
        for(k=69;k>=j;k=k-2){
            printf(" ");
        }
        for(i=65;i<=j;i++){
            c=char(i);
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}