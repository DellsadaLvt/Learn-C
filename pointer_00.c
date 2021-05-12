 /*==================================================*/
#include<stdio.h>
#include<stdint.h>

/*==================================================*/
void Section_01( void );
void Section_02();
void Section_03( void );
void Section_04( void );
/*==================================================*/
int main( void )
{
	Section_04( );
	return 0;
}


void Section_01( void )
{
	int a = 200, b = 300;

	int *ptr = 0;
	int *ptr_0 = &a;  

	float f  = 2.5;
	float *fptr;
	fptr = &f;

	printf("\nThe address of a: %x\n", &a);
	printf("\nThe address of a: %x\n", ptr_0);

	printf("\nGia tri cua bien a: %d", *ptr_0);
	ptr_0 = &b;
	printf("\nGia tri cua bien b: %d", *ptr_0);
}

void Section_02()
{
	int arr[]= { 1,2,3,4,5,6};
	int *ptr = arr;

	printf("\nThe address of arr   : %x", arr);
	printf("\nThe address of arr[0]: %x", &arr[0]);
	printf("\nThe value of the *ptr: %x", ptr);
}

void Section_03( void )
{
	int arr[]= { 1,2 ,3};
	int *ptr = arr;

	printf("\n");
	for( uint8_t i= 0; i< 3; i++)
		printf("%3d", arr[i]);

	printf("\n");
	for( uint8_t i= 0; i< 3; i++)
		printf("%3d", *(ptr+i));

	ptr = arr;
	printf("\n");
	for( ; ptr <= &arr[2]; ptr++)
		printf("%3d", *ptr);

}

void Section_04( void )
{
	int arr[]= {1,2,3};
	int *ptr;
	ptr = arr;
	printf("\nThe address of array: %d", ptr);
	printf("\nThe value of arr[0] : %d", *ptr);

	ptr = arr;
	printf("\nThe first update:  %d", ptr);
	ptr++; // ptr = ptr + sizeof(int)
	printf("\nThe second update: %d", ptr);
	ptr--;
	printf("\nThe third update:  %d", ptr);
	ptr += 5; // ptr = ptr + 5*sizeof(int)
	printf("\nThe forth update: %d", ptr);
	ptr -= 2;
	printf("\nThe fifth update: %d", ptr);
	ptr = (int*)0x12;  // 0x12H = 18decimal;
	printf("\nThe sixth update: %d", ptr);
}