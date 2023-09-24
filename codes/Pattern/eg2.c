#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n-i; j++)
        {
            printf("  ");
        }
        int C = 1; // used to represent C(i, i)
        for (int j = 1; j <= i; j++)
        {
            printf("%d   ", C);
            C = C * (i - j) / j;
        }
        printf("\n");
    }
    return 0;
}
