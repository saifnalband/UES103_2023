#include<stdio.h>
int main() {
    int n, i = 2, found = 0;
    double limit;
    scanf ("%d", &n);
    limit = sqrt(n);
    while (i <= limit) {
        if (n % i == 0) {
            found = 1; break;
        }
        i = i + 1;
    }
    if (found == 0) 
        printf ("%d is a prime \n", n);
    else 
        printf ("%d is not a prime \n", n);
    return 0;
}