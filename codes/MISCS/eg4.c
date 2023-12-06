#include<stdio.h>
const int N = 4;
void sumlowerDiag(int a[][N],  int m){
    int i,j;
    int sum = 0;
    for(i=0; i<m; i++){
        for(j=0; j<N; j++){
            if(j<i){
                sum += a[i][j];
            }
        }
    }
    printf("Sum of lower triangular matrix = %d \n", sum);
}
void sumUpperDiag(int a[][N],  int m){
    int i,j;
    int sum = 0;
    for(i=0; i<m; i++){
        for(j=0; j<N; j++){
            if(j>i){
                sum += a[i][j];
            }
        }
    }
    printf("Sum of upper triangular matrix = %d\n", sum);
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
int main(){
	int a[][4] = {{1, 1, 1, 1},
				{1, 6, 1, 1},
				{1, 1, 3, 1},
				{0, 1, 1, 8}};
    printf("Method_0\n");
    printArray(a,4);
	sumUpperDiag(a,4);
    sumlowerDiag(a,4);
	return 0;
}