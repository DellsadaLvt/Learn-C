/*=====================================================================*/
#include<stdio.h>
#include<stdint.h>
#include<string.h>


/*=====================================================================*/
void ShowString( char *str, uint8_t mod);



/*=====================================================================*/
int main( void )
{
	char str[12]=	"Hello World";
	//str[11] = '\0';

	ShowString(str, 2);
	return 0;
}


/*=====================================================================*/
void ShowString( char *str, uint8_t mod)
{
	char *ptrString = str;
	uint8_t i = 0;

	switch(mod)
	{
		case 0:
			/* METHOD ONE */
			printf("The size of string: %d\n", sizeof(str));
			printf("Show string: %s\n", str);
			printf("The size of string using strlen: %d\n", strlen(str));
			break;

		case 1:
			/* METHOD TWO */
			printf("%s\n", ptrString);
			printf("The second char in the string: %c\n", *(ptrString+2));
			str[1]= 'E';
			printf("The modify string: %s\n", str);
			break;

		case 2:	
			/*METHOD THREE*/
			while(*(str+i) != '\0')
			{
				printf("%c", *(str+i)); // str[i] is same as *(str+i)
				i++;
			}

		default:
			break;
		}
}
