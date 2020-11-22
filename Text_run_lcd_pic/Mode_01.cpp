#include<stdio.h>
#include<string.h>

const char *ten = "Le Van Tho";
char temp[21];
int i, j;

void Text_run();

int main(void)
{
    Text_run();
    return 0;
}

void Text_run()
{
    for(i = 0; i< 20; i++)      temp[i] = ' ';
    for(j = 0; j < (strlen(ten) + 20); j++)
    {
        for(i = 0; i< 19 ; i++)
        {
            temp[i]= temp[i+1];
        }
        if(j < strlen(ten))     temp[19] = ten[j];
        else                    temp[19] = ' ';
        printf("string is:%s \n", temp);
    }
}