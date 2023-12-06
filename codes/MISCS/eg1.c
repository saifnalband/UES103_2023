/*
 * Created on Wed Dec 21 2022
 *
 * Copyright (c) 2022 Your Company
 * Write a C program to remove the vowels from a string :
 */
#include <stdio.h>
#include <stdlib.h>
int isVowel(char c)
{
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        return 1;
    default:
        return 0;
    }
}

int main(int argc, char *argv[]){
    char str[100];
    int i = 0;
    int j = 0;
    int k = 0;
    int no_vowels = 0;
    FILE *fp;
    char s;
    fp=fopen(argv[1],"r");
    if(fp==NULL){
        printf("\nCAN NOT OPEN FILE");
        exit(1);
        }
    do{
        s=getc(fp); // read file character by character
        str[k] = s;
        printf("%c",s);
        k++;
    }
    while(s!=EOF);
    printf("\n");
    //char str[20] = "hello world";
    for (i = 0; str[i] != '\0'; i++){
        if (isVowel(str[i]) == 0){
            str[j] = str[i];
            j++;
        }
        else
            no_vowels++;
    }
    str[j] = '\0';
    printf("%s\n", str);
    printf("no of vowels: %d ", no_vowels);
}