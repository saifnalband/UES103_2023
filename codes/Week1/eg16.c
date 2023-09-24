// C Program to create a simple calculator using switch
// statement
#include <stdio.h>
#include <stdlib.h>

// driver code
int main()
{
	// switch variable
	char choice;
	// operands
	int x, y;

	while (1) {
		printf("Enter the Operator (+,-,*,/)\nEnter x to "
			"exit\n");
		scanf(" %c", &choice);

		// for exit
		if (choice == 'x') {
			exit(0);
		}

		printf("Enter the two numbers: ");
		scanf("%d %d", &x, &y);

		// switch case with operation for each operator
		switch (choice) {
		case '+':
			printf("%d + %d = %d\n", x, y, x + y);
			break;

		case '-':
			printf("%d - %d = %d\n", x, y, x - y);
			break;

		case '*':
			printf("%d * %d = %d\n", x, y, x * y);
			break;
		case '/':
			printf("%d / %d = %d\n", x, y, x / y);
			break;
		default:
			printf("Invalid Operator Input\n");
		}
	}
	return 0;
}
