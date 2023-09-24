/*
Find	the	sum	of	digits	of	a	number
*/
#include <stdio.h> 
int main() 
{ 
    int n, sum=0; 
    scanf ("%d", &n); 
    while (n != 0) { 
        sum = sum + (n % 10); 
        n = n / 10; 
    } 
    printf ("The sum of digits of the number is %d \n", sum); 
    return 0; 
}