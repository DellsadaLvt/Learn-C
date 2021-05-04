#include<stdio.h>
#include<stdint.h>


// test the final value of array and string with NULL
void section_0( void); 
void section_1( void );
void section_2( void );


int main( void )
{
	section_2();
	return 0;
}


void section_0( void )
{
	int a[3] ={ 1,2,3};
	for( uint8_t i= 0; i< 3; i++)
		printf("%5d", a[i]);

	printf("\n");

	char str[3]= {'1', '2', '5'};
	for(uint8_t i= 0; i< 3; i++)
		printf("%5c", str[i]);
}


void section_1( void )
{
	char c= 64;
	printf("\nThe decimal 	of c: %5d", c);
	printf("\nThe character of c: %5c", c);

	char str[13] = "Hello World!";
	printf("\nThe string: %s", str);
}

void section_2( void )
{
	char c;
	scanf("%c", &c);
	printf("\nThe first character: %c %d\n", c, c);

	fflush(stdin); // xoa bo dem
	char d = getchar();
	printf("\nThe second character: %c, %d\n", d, d);

	fflush(stdin);
	char str[13];
	gets(str);
	printf("\nThe string is: %s", str);

}