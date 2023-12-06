/*
 * Created on Wed Dec 21 2022
 *
 * Copyright (c) 2022 Your Company
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
        FILE *fp;
        char s;
        fp=fopen(argv[1],"r");
        if(fp==NULL){
                printf("\nCAN NOT OPEN FILE");
                exit(1);
        }
        do{
                s=getc(fp); // read file character by character
                printf("%c",s);
        }
        while(s!=EOF);
        fclose(fp);
        return 0;
}