#include<stdio.h>
int main(){
    int i,j,n,m;
    char k = 'A';
    n = 4;
    m = n+3;
    for(i=1; i<=n;i++){
        k = 'A';
        for(j=1; j<=m;j++){            
            if( j>=(n+1-i) && j<=(n-1+i)){
                printf("%c",k);
                k++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}