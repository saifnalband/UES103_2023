
// C program to print the full pyramid pattern of stars
#include <stdio.h>
  
int main()
{
    const int ROWS = 5; 
    // first loop to print all rows
    for (int row = 0; row < ROWS; row++) {  
        // inner loop 1 to print white spaces
        for (int col = 0; col < 2 * (ROWS - row) - 1; col++) {
            printf(" ");
        }
        // inner loop 2 to print star * character
        for (int col = 0; col < 2 * row + 1; col++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}