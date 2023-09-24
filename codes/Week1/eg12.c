#include<stdio.h>
int main(){
    int sum=0;
    int n,count;
    printf("enter the number:");
    scanf("%d", &n);
    for(count=1; count<=n; count++){
        sum = sum + count;
    }
    printf("final sum:%d",sum);
    return 0;

}