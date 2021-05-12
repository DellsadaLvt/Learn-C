#include"header.h"

extern int u8_check_extern;

void check_extern( void )
{
	u8_check_extern++;
	printf("\n\nthe second value: %d\n", u8_check_extern);
}