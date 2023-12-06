#include<stdio.h>
int main( )
{
	FILE *fp ;
	char another = 'Y' ;
	struct emp
	{
		char name[40] ;
		int age ;
		float bs ;
	} ;
	struct emp e ;
	
	fp = fopen ("record.txt", "w" ) ;

	while ( another == 'Y'  || another == 'y' )
	{
		printf ( "\nEnter name, age and basic salary: " ) ;
		scanf ( "%s %d %f", e.name, &e.age, &e.bs ) ;
		fprintf ( fp, "%s %d %f\n", e.name, e.age, e.bs ) ;
		printf ( "Add another record (Y/N) " ) ;
		fflush ( stdin ) ;
		scanf("%c",&another);
	}
	fclose ( fp ) ;
	return 0;
}
