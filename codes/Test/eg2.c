#include<stdio.h>
int main(){
    int temp,n,i,j,A[] ={ 4, 34, 9, -5, 2, 8, 11, 15, 3}, x;
    //write the code here
    n = sizeof(A)/sizeof(A[0]);
    int m = n;
    for(i = 0; i<n;i++)
        printf("%d ", A[i]);
    n = 10;
    i = 0;
    while(i<n-1)
    {
        if(A[i]> A[i+1])
        {
            temp = A[i+1];
            A[i+1] = A[i];
            A[i] = temp;
            i = 0;
        }
        else
            i++;
    }
    printf("\n");
    for(i = 0; i<m;i++)
        printf("%d ", A[i]);
    x = A[1];
    printf("\n second smallest number : %d", x);

}