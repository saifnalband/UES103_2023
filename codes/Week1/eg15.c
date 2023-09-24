#include<stdio.h>
int main(){
    char opt,ch;
    int a,b;
    // Input the Character
    printf("\n\nEnter the Character: ");
    printf("enter + for addtion\n");
    printf("enter - for subtraction\n");
    scanf("%c", &ch);
    printf("\nEntered character is: %c \n", ch);
    // Output the Character
    printf(" enter a:");
    scanf("%d",&a);
    printf(" enter b value:");
    scanf("%d",&b);
    switch(ch)
    {
    case '+':
        /* code */
        printf("addtion of a + b: %d",a+b);
        break;
    case '-':
        printf("subtraction of a - b: %d", a-b);
        break;
    default:
        printf(" wrong input");
        break;
    }
    return 0;
}