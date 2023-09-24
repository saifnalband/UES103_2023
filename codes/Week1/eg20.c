#include<stdio.h>
int main() {
    int n, i=2;
    double limit;
    scanf ("%d", &n);
    limit = sqrt(n);
    for (i = 2, i <= limit; i++) {
        if (n % i == 0) {
            printf ("%d is not a prime \n", n);
            break;
        }
    }
    if (i > limit) 
        printf ("%d is a prime \n", n);
    return 0;
}   