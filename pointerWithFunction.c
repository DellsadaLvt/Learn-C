/*=============================================================*/
#include<stdio.h>
#include<stdint.h>


/*=============================================================*/
int Add(  const int *a, int *b);



/*=============================================================*/
int main( void )
{
	int a = 10, b =20;
	//printf("The result: %d\n", Add(&a,&b));
	int (*p)( const int*, int*);
	p = &Add;
	printf("The result: %d\n", (*p)(&a, &b));
	return 0;
}


/*=============================================================*/
int Add(  const int *a,  int *b)
{
	//b = (b> 10)? 10, 20;
	return (*a+*b);
}
