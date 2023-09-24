#include<stdio.h>
int main()
{
    int month;
    int i=1, n;
    scanf("%d", &n);
    while (i <= n) {
        printf ("Line no : %d\n",i);
        i = i + 1;
    }
    do{
        printf("Please enter months (1-12 months)");
        scanf("%d", &month);
    } while((month<1)||(month>12));
    printf("end");
}