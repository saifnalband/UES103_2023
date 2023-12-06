#include<stdio.h>
#include<string.h>
int main(){
    char buf[6];
    strcpy(buf, "Hi");
    char *myStr = buf;
    printf("%s\n", myStr);
    myStr[0] = 'A';
    printf("%s", myStr);
}