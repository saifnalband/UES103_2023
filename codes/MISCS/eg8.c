#include <stdio.h>
#include <string.h>

void UpperLowerCon(char s[], int size){
   int i = 0;
   for (i = 0; i!=size; i++) {
      if(s[i] >= 'A' && s[i] <= 'Z') {
         s[i] = s[i] + 32;
      }
      else if (s[i]==' '){
         /* code */
         continue;
      }
      else{
            s[i] = s[i] - 32;
      }
   }
}
void UpperLowerPT(char * s, int size){
   int i = 0;
   for (i = 0; i!=size; i++,s++) {
      if(*s >= 'A' && *s <= 'Z') {
         *s = *s + 32;
      }
      else if (*s ==' '){
         /* code */
         continue;
      }
      else{
            *s = *s - 32;
      }
   }
}

int main() {
   char s[100]; //= "ThIs Is ComPuTER PrOgM";
   int size;
   printf("\nEnter a string : ");
   gets(s);
   size = strlen(s);
   //printf("size od STR: %d\n",size);
   printf("the original string: %s",s);
   //UpperLowerCon(s, size);
   UpperLowerPT(s, size);
   printf("\nString in after Conversion = %s", s);
   return 0;
}