#include <stdio.h>
#include <string.h>

struct Players{
  char name[60];
  char country[50];
  int jerseyNo;
  char section;
}player1; 

int main(){
  // created variable student1 for structure Players 
struct Players player2;
struct Players player3 = {"MESSI" ,"Argentina", 10, 'S'};
 
// accessing player1 member and initializing them
 strcpy(player1.name,"Ronaldo");
 strcpy(player1.country,"Portugal");
 player1.jerseyNo = 7;
 player1.section = 'E';

// accessing player2 member and initializing them
 strcpy(player2.name,"Modric");
 strcpy(player2.country,"Croatia");
 player2.jerseyNo = 14;
 player2.section = 'E';
 
 // printing values 
 printf( "Player Name : %s\n", player1.name);
 printf( "Player Country : %s\n", player1.country);
 printf( "Player No : %d\n", player1.jerseyNo);
 printf( "Player Section : %c\n", player1.section);

  // printing values 
 printf( "Player Name : %s\n", player2.name);
 printf( "Player Country : %s\n", player2.country);
 printf( "Player No : %d\n", player2.jerseyNo);
 printf( "Player Section : %c\n", player2.section);

   // printing values 
 printf( "Player Name : %s\n", player3.name);
 printf( "Player Country : %s\n", player3.country);
 printf( "Player No : %d\n", player3.jerseyNo);
 printf( "Player Section : %c\n", player3.section);
 
 return 0;
}
