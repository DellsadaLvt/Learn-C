#include<stdio.h>

char array[10];
int i,j, buffer;
void sepMan();

int main()
{
    printf_s("input: \n");
    for(i=0; i<2; i++)
    {
        scanf("%d", &array[i]);
    }
    //sepMan();
    for(i=0; i<9; i++)  printf("array[%d]: %d \n ", i, array[i]);
    return 0;
}

void sepMan(void)
{
    for(i=0;i<8;i++)
    {
        for(j=i;j<9;j++)
        {
            if(array[i] < array[j])
            {
                buffer = array[i];
                array[i] = array[j];
                array[j] = buffer;
            }
        }
    }
}
