#include<stdio.h>
#include<stdint.h>

/*====================== VARIABLES ================================*/
uint8_t size_array, old_numbers; 

/*====================== DECLARATION FUNC =========================*/


/*====================== 	MAIN     ================================*/

int main( void )
{
	/*========================================== INITIAL VALUE =================================================*/
	old_numbers = 0;


	/*========================================== CREATE ARRAY =================================================*/
	/* DETERMLINE THE SIZE OF THE ARRAY */
	printf("Select the numbers of the array: ");
	scanf("%d", &size_array);
	printf("\n\n");


	/* CREATE ARRAY */
	uint8_t array[size_array +1];


	/* INPUT VALUE TO ARRAY */
	printf("nhap gia tri mang: ");
	for( uint8_t i=0; i< size_array; i++)
		scanf("%d", &array[i]);


	/* PRINT THE VALUE OF ARRAY */
	printf("\n\n******* The origin array ********* \n");
	for( uint8_t i=0; i< size_array; i++)
		printf(" array[%d]: %d\n",i,  array[i]);
	printf("\n\nThe size of the array is: %d\n", sizeof(array));
	/*===========================================================================================*/

	/*============================== ARANGEMENT THE ARRAY INCREMENT ============================================*/
	for( uint8_t i= 0;	i< (size_array-1);	i++)
		for( uint8_t j=(i+1)	; j<size_array;	j++)
			if( array[i] > array[j])
			{
				uint8_t temp;
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}

	printf("\n\n********** The array after arrange ********** \n");
	for( uint8_t i=0; i< size_array; i++)
		printf(" array[%d]: %d\n",i,  array[i]);

	/*================================= ARRANGEMENT THE DIV TO 2 ==========================================================*/
	for(uint8_t i = 0; i< size_array; i++)
	{
		if( array[i]%2)
		{
			uint8_t temp;
			temp = array[i];
			array[i] = array[old_numbers];
			array[old_numbers] = temp;
			old_numbers++;
		}

	}

	printf("\n\n**************  The array after arrange the old_numbers and the even numbers *************** \n");
	for( uint8_t i=0; i< size_array; i++)
		printf(" array[%d]: %d\n",i,  array[i]);


	/*================================= ARRANGEMENT THE ARRAY AFTER ARANGE OLD AND EVEN NUMBERS ==========================================================*/
	for( uint8_t i= 0;	i< (old_numbers-1);	i++)
		for( uint8_t j=(i+1)	; j< old_numbers;	j++)
			if( array[i] > array[j])
			{
				uint8_t temp;
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}

	for( uint8_t i= old_numbers;	i< (size_array-1);	i++)
		for( uint8_t j=(i+1)	; j< size_array;	j++)
			if( array[i] > array[j])
			{
				uint8_t temp;
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}


	printf("\n\n****** THE FINAL ARRAY ******************* \n");
	for( uint8_t i=0; i< size_array; i++)
		printf(" array[%d]: %d\n",i,  array[i]);



	return 0;
}

/*================= SUBROUTINE ===================*/
