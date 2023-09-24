#include<stdio.h>
int main(){
    const int ROWS = 3;
    const int COL = 5;
    int col, row = 1;
    while(row<=ROWS){
        /* print a row of 5 * s */
        col = 1;
        while(col<=COL){
            printf("*");
            col++;
        }
        printf("\n");
        row++;
    }
}