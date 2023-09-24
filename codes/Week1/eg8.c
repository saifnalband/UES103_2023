/*
GCD of two numbers
*/
#include <stdio.h> 
int main() 
{ 
    int A, B, temp; 
    scanf ("%d %d", &A, &B); 
    if (A > B) { 
        temp = A; 
        A = B; 
        B = temp; 
    } 
    while ((B % A) != 0) { 
        temp = B % A; 
        B = A; 
        A = temp; 
    } 
    printf ("The GCD is %d", A); 
    return 0; 
}