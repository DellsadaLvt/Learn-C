#include<stdio.h>
#include<stdint.h>


uint8_t a, b;
int8_t c;


void pass_by_reference(uint8_t *x,uint8_t *y);
void pass_by_value( uint8_t a, uint8_t b );



int main( void )
{
	a = 10;
	b = 100;
	pass_by_value(a, b);


	printf("\n\nThe results: %d, %d\n", a, b);


	return 0;
}



void pass_by_reference(uint8_t *x,uint8_t *y)
{
	*x = 101;
	*y= 102;
	
}

void pass_by_value( uint8_t a, uint8_t b )
{
	a = 200;
	b = 30;
}