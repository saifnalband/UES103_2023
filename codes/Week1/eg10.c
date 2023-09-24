#include <stdio.h>
#include <stdlib.h> //for atoi, atof etc. functions
#include <string.h>  //for strcpy function

 main () {
   char str[]="3.123";  //OR char s[10]; strcpy(str, "3.145");
   printf("\nString value = %s",str);
   printf("\nFloat value = %f",atof("3.123")); //or atof(str)
   printf("\nInt value = %d",atoi(str));
   printf("\nLong val = %ld",atol(str));
   
   int i=100; long l=999999; 
     
   printf("\nString  = %s",itoa(i, str, 10));  //int,str,base (10 for decimal)
   printf("\nString  = %s",ltoa(l, str, 10));  //int,str,base
return 0;
}