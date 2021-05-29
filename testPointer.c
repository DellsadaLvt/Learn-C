#include <stdio.h>
#include <stdint.h>


void test( uint32_t add , uint8_t buffer);
void test1( uint32_t add, uint8_t *buffer);




int main( void ){
	
	//test( 0x76543210, 0xAB );
	uint8_t buffer[10]= {0,1,2,3,4,5,6,7,8,9};
	test1(0x76543210, buffer);
	return 0;
}

void test( uint32_t add, uint8_t buffer){
	printf("Hex:  %x\n", (uint16_t)add);
	printf("Hex:  %x\n", 0x20);
	printf("\n\n");
	printf("buffer: %x\n", (uint16_t) buffer);
	printf("buffer: %p\n", (uint16_t) buffer);
}

void test1( uint32_t add, uint8_t *buffer){
	/*printf("Hex:  %x\n", (uint16_t)add);
	printf("Hex:  %x\n", 0x20);
	printf("\n\n");
	printf("buffer: %x\n", (uint16_t) buffer);
	printf("buffer: %p\n", (uint16_t) buffer);
	printf("\n\n");*/
	uint32_t u32Pos;
	for( u32Pos=0; u32Pos<5; u32Pos++)
		printf("%d\n", *(uint16_t*)(buffer + u32Pos*2));

}


