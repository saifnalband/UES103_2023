#include<stdio.h>
int main(){
    int year;
    printf("emter year");
    scanf("%d", &year);
    if(year % 100 == 0)
    {
        if(year % 400 == 0)
        {
            printf("Leap Year");
        }
        else
            printf(" NOT LEAP YEAR");
    }
    if (year % 4 == 0)
        printf("Leap year");
}