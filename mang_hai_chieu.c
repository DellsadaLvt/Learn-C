#include<stdio.h>
#include<stdint.h>

#define max 100

void nhap_mang(int arr[][4], int m, int n );
void xuat_mang( int arr[][4], int m, int n);



int main( void )
{

	/*int a[3][4]= {
		{1,2,3,4},
		{1,2,3,4},
		{1,2,3,4},
	};*/

	int a[3][4];

	nhap_mang( a, 3, 4);

	int m = sizeof(a)/sizeof(int);
	printf("\nSO PHAN TU CUA MANG LA: %d\n", m);

	int n = sizeof(a[0])/sizeof(int);
	printf("\nSO COT LA: %d", n);

	m /= n;
	printf("\n\nSO HANG LA: %d", m);


	xuat_mang(a, 3, 4);

	return 0;
}


void xuat_mang( int arr[][4], int m, int n)
{
	printf("\n\n");
	uint8_t i, j;
	
	for( i= 0; i< m; i++)
	{
		for( j= 0; j< n ; j++)
			printf("%5d", arr[i][j]);
		printf("\n");
	}
}

void nhap_mang(int arr[][4], int m, int n )
{
	printf("\nNhap cac phan tu cua mang: \n");
	int i, j;
	for( i= 0; i< m; i++)
		for( j= 0; j< n ; j++)
			scanf("%5d", &arr[i][j]);
		
}