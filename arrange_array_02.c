/*====================================================*/
#include<stdio.h>
#include<stdint.h>



/*====================================================*/
void enter_array( int arr[], uint8_t size);
void print_arr( int arr[], uint8_t size);
void test_static( void );
void sort_( int array[], uint8_t size_array);
int search_binary( int arr[], uint8_t size, int search_value);
/*====================================================*/
int main( void )
{
	uint8_t size;
	int x;
	printf("enter size of array\n");
	scanf("%d", &size);
	int arr[(size+1)];

	enter_array(arr, size);
	print_arr(arr, size);

	sort_(arr, size);
	print_arr(arr, size);

	printf("\nwhile loop\n");

	while(1)
	{
		printf("\nEnter the search value");
		scanf("%d", &x);
		if(x == 100) break;
		if(search_binary(arr, size, x))
			printf("\nTim thay");
		else
			printf("\nKhong tim thay\n\n");
	}
	return 0;
}

/*====================================================*/
void enter_array( int arr[],uint8_t size)
{
	for( uint8_t i=0; i< size; i++)
		scanf("%d", &arr[i]);
	printf("\n\n");
}

void print_arr( int arr[], uint8_t size)
{
	for( uint8_t i = 0; i< size; i++)
		printf("%3d", arr[i]);

	printf("\n\n");
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

int search_binary( int arr[], uint8_t size, int search_value)
{
	uint8_t left, right , mid;
	left = 0;
	right = size -1;
	while( left <= right)
	{
		mid = (left + right)/2;
		if(arr[mid] == search_value)
			return 1;
		else if( arr[mid] < search_value)
			left = mid + 1;
		else
			right = mid -1;
	}
	return 0;
}




/*====================================*/
	