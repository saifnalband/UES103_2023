#include<stdio.h>
int main()
{
    char c1;
    scanf("%c", &c1);
    /* the ascii code of c1 must lie between the ascii codes of ‘a’ and ‘z’ */
    if (c1 >= 'a' && c1<= 'z')
        printf("%c is a lowercase alphabet\n", c1);
    else 
        printf("%c is not a lowercase alphabet\n", c1);
    return 0;
}