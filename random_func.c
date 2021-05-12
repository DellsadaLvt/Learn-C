#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main(void)
{
	srand(time(NULL));

	/* PRINT RANDOM IN RANGE 1->6 */
	for( int i = 0; i< 10; i++)
		printf("%3d", rand()%6);

	return 0;
}