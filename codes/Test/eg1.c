#include<stdio.h>
/*
Author: Ishank Goyal
Roll No : 102303291
*/
// below library was not included
#include<string.h>
int main(){
    int i, j;
    char A[50];
    char B[50];
    printf("Enter two string:");
    scanf("%s", A);
    scanf("%d", B);
    if(strlen(A) == strlen(B))
    {
        for(i=0; strlen(A);)
        {
            for(j = 0; j < strlen(B);)
            {
                if(A[i]==B[j])
                    break;
                else
                    j++;
            }
            if( j == strlen(B))
            {
                printf("NOT an Anogram");
                break;
            }
            else
                i++;
        }
        if(i == strlen(A))
            printf("Strings are Anograms");
    }
    else
        printf("not an Anogram ");
}