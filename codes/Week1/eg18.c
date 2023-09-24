#include<stdio.h>
int main()
{
    char c1;
    scanf("%c", &c1);
    /* convert to uppercase if lowercase, else leave as it is */
    if (c1 >= 'a' && c1<= 'z')
    /* since ascii codes of uppercase letters are contiguous, the uppercase version of c1 will be as far 
    away from the ascii code of ‘A’ as it is from the ascii code of ‘a’ */
        c1 = 'A' + (c1 - 'a');
    printf("The letter is %c\n", c1);
    return 0;
}