#include<stdio.h>
#include<stdint.h>


int u8_check_extern;

int main( void )
{
	u8_check_extern = 10;
	printf("the first value: %d\n", u8_check_extern);
	//check_extern();

	return 0;
}