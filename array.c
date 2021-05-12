/*=========================================================*/
#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<time.h>


/*=========================================================*/
#define max 20



/*=========================================================*/
uint8_t array[(max + 1)];
uint8_t u8_i;


/*=========================================================*/
void enter_array( void );
void address_of_array();



/*=========================================================*/
int main( void )
{
	address_of_array();
	return 0;
}



/*=========================================================*/
void enter_array( void )
{
	srand(time(NULL));

	for(uint8_t i= 0; i<max; i++)
		array[i] = rand();

	printf("\n\n************  THE ARRAY  **************/n/n");
	for( uint8_t i=0; i< max; i++)
		printf("Array[%d]: %d\n", i, array[i]);
}

void address_of_array()
{
	printf("\n\nThe address of the  is %x\n", &u8_i );

	/* ADDRESS OF ARRAY */
	printf("\n\nThe first address: %x\n", array);
	printf("The second address: %x\n", &array);
	printf("The third address: %x\n", &array[0]);
}