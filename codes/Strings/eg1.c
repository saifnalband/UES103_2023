#include<stdio.h>
#include<string.h>
int main(){
    //char C[4] = "JOHN";  
    char C[] = "JOHN";
    int len = strlen(C);
    printf("size in bytes: %d\n", sizeof(C));
    printf("length of : %d\n", len);
}