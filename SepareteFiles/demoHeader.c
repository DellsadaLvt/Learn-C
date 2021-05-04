#include<stdio.h>
#include<stdint.h>
#include"headerFile.h"
#include"headerFile.c"

int main( void )
{
	int16_t a = sums(1,2);
	printf("the result: %d\n", a );

	return 0;
}