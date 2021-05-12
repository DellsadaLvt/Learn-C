/*============================ LIBRARIES ====================================*/
#include<stdio.h>
#include<stdint.h>
/*============================ VALUE ====================================*/
/*typedef enum
{
	hcn = 0x01,
	triangle = 0x09,
}mode__;*/


uint8_t	input_1, mode, input_2;

/*============================ DECLARE FUNCTION ====================================*/
void in_ra_hcn(uint8_t length, uint8_t width);
void triangle_00( uint8_t heigh, uint8_t width);
void enter_input( void );
void control_print( uint8_t mode_, uint8_t input_0_, uint8_t input_1_ );
//void test_enum( mode__ a);
void isosceles_triangle( uint8_t high );
void in_ra_so_dx(uint8_t middle);
void isosceles_triangle_01( uint8_t high );
/*============================ MAIN ====================================*/
int main( void )
{
	/*enter_input( );
	control_print( mode, input_1, input_2);*/

	isosceles_triangle_01(8);
	
	return 0;
}



/*============================ SUBROUTINE ====================================*/
void in_ra_hcn(uint8_t length, uint8_t width)
{
	for(uint8_t i= 0; i< length; i++)
	{
		for( uint8_t j = 0; j< width; j++)
			printf("*");

		printf("\n");
	}

}

void triangle_00( uint8_t heigh, uint8_t width)
{
	uint8_t run = width -1;
	for(uint8_t i= 0; i< heigh; i++)
	{
		for( uint8_t j = run; j< width; j++)
			printf("*");

		run--;
		if( run < 0 )
			break;
		printf("\n");
	}
}

void control_print( uint8_t mode_, uint8_t input_0_, uint8_t input_1_ )
{
	switch(mode_)
	{
		case 0:
			in_ra_hcn(input_0_, input_1_);
			break;

		case 1: 
			triangle_00(input_0_, input_1_);
			break;

		case 2:
			isosceles_triangle(input_0_);
			break;

		case 3:
			 isosceles_triangle_0(input_0_);
			 break;

		default:
			printf("\n\n******  	INPUT IVALUE 		******\n\n");
			break;
	}
}

/*void test_enum( mode__ a)
{
	if(a== hcn)
		printf("hcn\n\n");
	else if(a == triangle)
		printf("triangle\n\n");
	else
		printf(" the input not true \n\n");
}*/

void enter_input( void )
{
	printf("***************Enter the input  *********************\n\n");
	scanf("%d%d%d",	&mode, &input_2, &input_1);
	printf("\n\nThe input is: %3d,%3d,%3d\n\n", mode, input_1, input_2);
}


void isosceles_triangle( uint8_t high )
{
	for( uint8_t k = 0; k<high ; k++)
	{
		for( uint8_t i = 0; i<(high - k) ; i++)
			printf(" ");
		for( uint8_t i = 0; i< (2*k+1) ; i++)
		{
			printf("*");
			
		}
		printf("\n");

	}
}

void in_ra_so_dx(uint8_t middle)
{
	uint8_t run = middle + 1;
	for( uint8_t i =1; i<= run ; i++)
		printf("%d",i);
	for( uint8_t i = (run-1) ; i>0 ; i--)
		printf("%d",i);
}

void isosceles_triangle_01( uint8_t high )
{
	for( uint8_t k = 0; k<high ; k++)
	{
		for( uint8_t i = 0; i<(high - k) ; i++)
			printf(" ");

		in_ra_so_dx(k);
		printf("\n");

	}
}