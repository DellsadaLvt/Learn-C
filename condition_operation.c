#include<stdio.h>
#include<stdint.h>


int main( void )
{
	uint8_t a,b, max;

	a = 10; b = 5;
	max = (a > b)? a: b;

	printf("\nThe max is: %d\n", max);


	printf("\nThe max is: %d", (a > b)? a : b);
}