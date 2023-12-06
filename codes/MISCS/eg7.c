#include<stdio.h>
#include<string.h>
#define MAX 100

void main(){
	//char str[MAX];
	//printf("Enter a line: ");
	//gets(str);
	//scanf("%[^\n]s",str);
    char str[200] = "This is C programing easy";
	int len=strlen(str);
	char rev[len];
	//rev[len]=0;
	int i,word = 0, k=0;
    for(i=len-1; i>=0;i--){
        word++;
        if(str[i]==' '|| i == 0){
            int j;
            for(j=i;j<=word+i;j++,k++){
                rev[k] = str[j];
            }
            word = 0;
            if(k>len){
                rev[k-1] = '\0';
            }
            else
                rev[k-1] = ' ';
        }
    }
    //rev[k-1] = '\n';
    printf("Original String : %s \n",str);
	printf("The string is : ");
  	puts(rev);
  	printf("\n");
    printf("reverse sentence: %s",rev);
}