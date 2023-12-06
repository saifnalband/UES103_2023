#include<stdio.h>
int main( )
{
	FILE *fp ;
	struct emp
	{
		char name[40] ;
		int age ;
		float bs ;
	} ;
	struct emp e ;

	fp = fopen ("record.txt", "r" ) ;
	
	while ( fscanf ( fp, "%s %d %f", e.name, &e.age, &e.bs ) != EOF )
		printf ( "\n%s %d %f", e.name, e.age, e.bs ) ;
	
	fclose ( fp ) ;
	return 0;
}
