#include<stdio.h>
#include<string.h>

char ten[] = {"Le Van Tho"};
char buffer[21];

short int i, j, k, l,n =0;

void Text_run();

int main()
{
    for(i=0; i< 20; i++)        buffer[i] = ' ';
    while(n< 300)
    {
        n++;
        Text_run();
    }
}


void Text_run()
{
    for(k = 0; k< strlen(ten);k++)
    {   
        for(j=0; j<(20-k); j++)
        {
            for(i=k; i< 20;i++)     {  buffer[i]  = buffer[i+1];}
            if(j==0)     
            {
                buffer[19] = ten[k];
            }
            //printf("mang buffer k:%d, j:%2d, i%2d:    ", k, j, i);
            for(l=0; l<20; l++)
            {
                printf("%c", buffer[l]);
            }
            printf("\n");
        }
    }
   
}
