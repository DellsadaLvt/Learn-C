#include<stdio.h>
#include<string.h>
#include<math.h>

int Compare(int x, int y);
int so, a, b;

int main()
{
    printf("nhap so compare: \n");
    scanf("%d%d", &a, &b);
    printf( "compare hai so %d va %d la: %d \n", a, b, Compare(a, b));
    return 0;
}

int Compare(int x, int y)
{
    int temp;
    if(x > y) temp = x + 10;
    else temp = y +10;
    return(temp);
}
