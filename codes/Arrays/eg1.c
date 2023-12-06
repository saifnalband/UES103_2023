/*Compute the sum of the elements of the array */
#include <stdio.h>
int main( void ){ 
    /* use initializer list to initialize array */
    int a[12] = { 1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45 };
    int i; /* counter */ 
    int total = 0; /* sum of array */
    /* sum of contents of array a */
    for ( i = 0; i <= 12; i++ ){
        total += a[ i ];
    } /* end for */
    printf( "Total of array element values is %d\n", total );
    return 0;
} 