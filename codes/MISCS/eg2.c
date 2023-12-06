/*
 * Created on Wed Dec 21 2022
 *
 * Copyright (c) 2022 Your Company
 */
// A simple C program to
// find sum of diagonals
#include <stdio.h>

const int M = 4;
const int N = 4;

void printDiagonalSums(int mat[M][N])
{
	int principal = 0, secondary = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			// Condition for principal diagonal
			if (i == j)
				principal += mat[i][j];

			// Condition for secondary diagonal
			if ((i + j) == (N - 1))
				secondary += mat[i][j];
		}
	}

	printf("%s", "Principal Diagonal:");
	printf("%d\n", principal);
	printf("%s", "Secondary Diagonal:");
	printf("%d\n", secondary);
}

void printArray(int arr[][N], int m){
    int i, j;
    for (i = 0; i < m; i++){
        for (j = 0; j < N; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
void print1(int *arr, int m, int n){
    int i, j;
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            printf("%d ", *((arr+i*n) + j));
        }
        printf("\n");
    }
}
void print2(int (*arr)[M]){
    int i, j;
    for (i = 0; i < M; i++){
        for (j = 0; j < M; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
// Driver code
int main()
{
	int a[][4] = {{1, 2, 3, 4},
				{5, 6, 7, 8},
				{1, 2, 3, 4},
				{0, 6, 7, 8}};
    printf("Method_0\n");
    printArray(a,4);
    printf("Method_1\n");
    print1(&a[0][0],4,4); // ((int *)arr, m, n)
    printf("Method_2\n");
    print2(a);
    printf("\n");
	printDiagonalSums(a);
	return 0;
}
