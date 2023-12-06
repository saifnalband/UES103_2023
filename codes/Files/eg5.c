#include<stdio.h>
int main( )
{
	FILE *fp,*fp2 ;
	struct emp
	{
		char name[40] ;
		int age ;
		float bs ;
	} ;
	struct emp e ;

	fp = fopen ("record.txt", "r" ) ;
	fp2 = fopen ("copy.txt", "w" ) ;
	
	while ( fscanf ( fp, "%s %d %f", e.name, &e.age, &e.bs ) != EOF )
		fprintf ( fp2, "%s %d %f\n", e.name, e.age, e.bs ) ;

	fclose (fp) ;
	fclose (fp2) ;
	return 0;
}
