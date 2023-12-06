/*
 * Created on Thu Dec 08 2022
 *
 * Copyright (c) 2022 Your Company
 */
#include <stdio.h>
int main(){   
    // array to store string taken as input
    char sentence[20];    
    // take user input
    printf("Enter any sentence: ");   
    // use scanf to get input
    scanf("%[^\n]%*c",sentence);    
    // printing the input value
    printf("You entered:\n %s.", sentence);
    return 0;
}
