/*================================================*/
#include<stdio.h>
#include<stdint.h>



/*==================================================*/

 	

/*==================================================*/
void input_array(int arr[]);
void print_array( const int arr[]);
int test_static( void );
int* input_array_01();
void sort_( int array[], uint8_t size_array);
/*==================================================*/
int main( void )
{
	uint8_t sec;
	printf("\nSelect Section and the length of array\n");
	scanf("%d", &sec);
	/*====== SECTION ONE ==============*/
	if( sec == 1 )
	{
		int array[(max + 1)];


		input_array(array);
		print_array(array);  	
		print_array(array); 
	}
	/*======= SECTON TWO ==============*/
	else if( sec == 2)
	{
		int result = test_static();
		printf("the second static value is: %d", result);
	}
	else if( sec == 3)
	{
		int *b;
		b= input_array_01();
		print_array(b);
	}
	else
		printf("\n THE SECTION NOT VALID");
	return 0;
}


/*==================================================*/
void input_array(  int arr[])
{ 
	for(uint8_t i=0; i<max; i++)
		scanf("%d", &arr[i]);
}

void print_array( const int arr[])
{
	for(uint8_t i= 0; i< max; i++)
		printf("%3d", arr[i]);
	printf("\n");
	//arr[0] = 50;
	//arr[1]*= 100;
}

	
int test_static( void )
{
	static int u8_static_test = 10;
	printf("the first static value is: %d\n", u8_static_test);

	return u8_static_test;
}

int* input_array_01( uint8_t length)
{
	static int arr[length];

	for(uint8_t i=0; i<length; i++)
		scanf("%d", &arr[i]);

	return arr;
}

void sort_( int array[], uint8_t size_array)
{
	for( uint8_t i= 0;	i< (size_array-1);	i++)
		for( uint8_t j=(i+1); j<size_array;	j++)
			if( array[i] > array[j])
			{
				uint8_t temp;
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
}