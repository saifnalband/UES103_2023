#include <stdio.h>
int main(){
    void disp( char ch);
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    for (int x=0; x<10; x++){
    /* I’m passing each element one by one 
    using subscript*/
    disp(arr[x]);
    }
    return 0;
}
void disp( char ch){
printf("%c ", ch);
}