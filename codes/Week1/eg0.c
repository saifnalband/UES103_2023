#include <stdio.h>
void main(){
    int choice;
    printf("Select an option from the list below:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    int a, b;
    // read two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    switch (choice)
    {
    case 1:
        printf("%d + %d = %d\n", a, b, a + b);
        break;
    case 2:
        printf("%d - %d = %d\n", a, b, a - b);
        break;
    case 3:
        printf("%d * %d = %d\n", a, b, a * b);
        break;
    case 4:
        printf("%d / %d = %d\n", a, b, a / b);
        break;
    case 5:
        printf("%d %% %d = %d\n", a, b, a % b);
        break;
    case 6:
        printf("Exiting...\n");
        break;
    default:
        printf("Invalid choice\n");
    }
}

