/*=======================================*/
#include<stdio.h>
#include<stdint.h>
#include<math.h>

/*=======================================*/
struct rcc
{
	int32_t gcc;
	int32_t reset;
	int32_t handle;
};

struct rcc *RCC = (struct rcc*)0x20000000;


/*=======================================*/
void array_handle( int array[]);




/*=======================================*/
int main( void )
{
	//printf("The value of the RCC value: %x\n", &(RCC->reset));

	int array[20]= { 0,1,2,3,4,5,6,7,8};
	printf("The size of the array: %d\n", sizeof(array));
	array_handle(array);
	for(uint16_t i=0; i< 7; i++)
		printf("%5d", array[i]);
	return 0;
}


/*=======================================*/
void array_handle( int array[])
{
	//*(array+6) = 20;
	array[6] = 80;
	printf("The size of the array in the subroutine: %d\n", sizeof(*array));
	
}