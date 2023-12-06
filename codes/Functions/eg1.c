/*
 * Scopes in if-Else block
 */



#include<stdio.h>

int main(){
	float n = 0;
	printf("\n\n ***************Enter the value of n****************\n\n");
	scanf("%f", &n);
	if(n){
		int a = 25;
		int b = 45;
		if(n>a+b) printf("\n\n*******Value of n is greater then a+b*********\n\n");
	}
	else{
		//  gives a compilation error
		/*
		 * a and b are not visible in this block
		 * but n is visible.
		 *
		 */
		printf("\n\n a=%d         b= %d            n=%f\n\n", a, b, n);
		printf("\n\n*********Value of n is not greater than a+b\n\n");
	}
}