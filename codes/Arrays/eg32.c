// arman's code
#include<stdio.h>
void letter(int);
int main(){
    int a, b, c,d,e;
    for(e=1;e<=4;e++){
        b = b-2*(e-1);
        d = (2*e)-1;
        for(a=b; a>0; a--){
            printf(" ");
        }
        for(c=1; c<=d;c++){
            letter(c);
        }
        printf("\n");
    }
}
void letter(int i){
    switch (i){
    case 1: printf("A");
        break;
    case 2: printf("B");
        break;
    case 3: printf("C");
        break;
    case 4: printf("D");
        break;
    case 5: printf("E");
        break;
    case 6: printf("F");
        break;
    case 7: printf("G");
        break;
    }
}