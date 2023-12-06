/*
 * Created on Wed Dec 14 2022
 *
 * Copyright (c) 2022 Your Company
 */
#include <stdio.h>

// structure one with random alignment 

struct Date_1{
   int day;
   int month;
   int year;
} v1;

// structure two with ordered alignment

struct Date_2
{
   int day : 5;
   int month : 4;
   int year;
} v2;

int main()
{
    // printing size of both structures
    printf("Size of Date_1 is: %lu\n",sizeof(v1)); // 12
    printf("Size of Date_2 is: %lu\n",sizeof(v2)); // 8
}
