#include<stdio.h>
int main() {
    int sum = 0, next;
    while (1) {
        scanf("%d", &next); 
        if (next < 0) 
            continue;
        if (next == 0) 
            break;
        sum = sum + next;
    } 
    printf ("Sum = %d\n", sum) ;
    return 0;
}