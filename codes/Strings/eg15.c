/*
 * Created on Tue Dec 13 2022
 *
 * Copyright (c) 2022 Your Company
 */
// C program to compare the two strings
// without using strcmp() function
#include <stdio.h>
// Function that compares the two string
void compareStrings(char* x, char* y){
	int flag = 0;
	// Iterate a loop till the end
	// of both the strings
	while (*x != '\0' || *y != '\0') {
		if (*x == *y) {
			x++;
			y++;
		}
		// If two characters are not same
		// print the difference and exit
		else if ((*x == '\0' && *y != '\0')
				|| (*x != '\0' && *y == '\0')
				|| *x != *y) {
			flag = 1;
			printf("Unequal Strings\n");
			break;
		}
	}
	// If two strings are exactly same
	if (flag == 0) {
		printf("Equal Strings\n");
	}
}

// Driver Code
int main(void){
	// Given strings s1 and s2
	char s1[20] = "Thapar";
	char s2[20] = "Thapar";
	// Function Call
	compareStrings(s1, s2);
	return 0;
}
