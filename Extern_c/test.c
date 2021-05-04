#include<stdio.h>
#include"header.h"
#include"header.c"


int u8_check_extern;



int main( void )
{
	int a = 10;
	printf("%d\n", a);

	u8_check_extern = 9; 
	printf("\n\nThe first is: %d", u8_check_extern);

	check_extern();
	return 0;
}