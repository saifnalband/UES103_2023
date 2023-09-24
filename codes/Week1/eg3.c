#include<stdio.h>
int main()
{
    const int A=2, B=-2;
    printf("Value of A is %d\n", A);
    printf("0 <= A <= 5?: Answer=%d\n", (0<=A) && (A<=5));
    printf("Value of B is %d\n", B);
    printf("-3 <= B <= -1?: Answer=%d\n", (-3<=B) && (B<=-1));
}
