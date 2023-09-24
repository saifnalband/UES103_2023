#include<stdio.h>
int main(){
    const int ROWS = 3;
    const int COL = 5;
    int col, row ;
    for(row = 1;row<=ROWS;row++){
        for(col = 1; col<=COL;col++){
            printf("*");
        }
        printf("\n");
    }

}