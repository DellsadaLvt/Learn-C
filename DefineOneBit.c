#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>


void showBit( uint8_t *x);
void survey( void );
void ResetBit( uint8_t *x, uint8_t i);
void SetBit( uint8_t *x, uint8_t i);








int main( void ){

	uint8_t x = 0xff;

	ResetBit(&x, 2);
	printf("%x\n", x);

	SetBit(&x, 2);
	printf("%x\n", x);

	x = 0xab;
	showBit(&x);


	return 0;
}












void showBit( uint8_t *x){

	uint8_t b[8];
	for(int8_t i=0 ; i< 8; i++){
	 	b[i]= (*x >> i) & (uint8_t)0x01; 

	}

	for(int8_t i = 7; i>= 0; i--){
		printf("%3d", b[i]);
	}
	printf("\n");

}



void ResetBit( uint8_t *x, uint8_t i){
	*x &= ~( (uint8_t)0x01 << i );
	printf("After reset: %x\n", *x);
}

void SetBit( uint8_t *x, uint8_t i){
	*x |= ( (uint8_t)0x01 << i );
	printf("After set: %x\n", *x);
}




void survey( void ){
	//int x= 11259375;
	int x = 0xABCD31;
	printf("%d \n", x);
	printf("%x \n", x);

	char *ptr;
	ptr = (char *)&x;
	printf("%c\n", *(ptr));
	printf("%x\n", *(ptr));
	printf("%x\n", *(ptr+1));

	*(ptr+2) = 0xef;
	printf("%p\n", x);
}
