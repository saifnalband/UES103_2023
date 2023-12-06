/* 
 * This program demonstrates scope and lifetime of variables
 *
 *
 * This program is erraneous.
 *
 */


int main()
{
	// Declaration and Assignment 
	int level_0 = 3;

	// Just declaration
	int answer;
	
	/* New scope begins here */
	{
		int level_1 = 1;
		{
			int level_2 = 2;
		}
		answer = level_1 + level_2; // Error!! level_2 not visible here, but a is alive and visible
	}
	/* End of scope */

	/* level_1 is no more alive */

	answer = level_0 + level_1; // Error! level_1 is not visible here

	return 0;
}