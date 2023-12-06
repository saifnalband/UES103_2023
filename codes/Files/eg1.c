/*
 * Created on Wed Dec 21 2022
 *
 * Copyright (c) 2022 Your Company
 */
#include <stdio.h>
#include <stdlib.h>

int main(){
        FILE *fp;
        char s;
        fp=fopen("file1.txt","r");
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
