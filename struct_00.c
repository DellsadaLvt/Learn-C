/*==========================================*/
/*======================= LIB =============================*/
#include<stdio.h>


/*================  FUNCTION DECLARATION ============*/
void EnterFunc( PHANSO &x )



/*=============== STRUCT ===================*/
struct phanso
{
	int tu;
	int mau;
};

typedef struct phanso PHANSO;

/*======================== MAIN ======================*/
int main( void )
{
	EnterFunc();
	return 0;
}

/*====================== SUBROUTINE ===============================*/
void EnterFunc( PHANSO &x )
{
	printf("Nhap tu\n");
	scanf("%d", &x.tu);
	printf("Nhap mau\n");
	scanf("%d", &x.mau);
	printf("Result: %d/%d", x.tu, x.mau);
}

