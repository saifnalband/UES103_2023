#include<stdio.h>
void fun1(int a);
int main(){
    int a,b= 10;
    printf("b:%d", b);
    fun1(b);
}
void fun1(int a){
    printf(" in main function: %d",a);
    return a;
}