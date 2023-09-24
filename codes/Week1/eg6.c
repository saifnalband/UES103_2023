/*
sizeof() of example
*/
#include <stdio.h>

int main() {
    // To find the amount of memory allocated to char
    printf("size of a char is: %lu\n", sizeof(char));
    
    // To find the amount of memory allocated to int
    printf("size of an int is: %lu\n", sizeof(int));
    
    // To find the amount of memory allocated to float
    printf("size of a float is: %lu\n", sizeof(float));
    
    // To find the amount of memory allocated to long int
    printf("size of a long int is: %lu\n", sizeof(long int));
    
    // To find the amount of memory allocated to double
    printf("size of a double is: %lu", sizeof(double));
    return 0;
}
