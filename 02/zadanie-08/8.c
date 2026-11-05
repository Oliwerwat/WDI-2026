
#include <stdio.h>
int max(int a, int b)
{
    return (a>b) ?a:b;
}
int min(int a,int b)
{
    return (a<b) ?a:b;
}

int main()
{
    int x=4,y=8;

    printf("Liczby: %d,%d\n", x, y);
    printf("Max: %d\n", max(x, y));
    printf("Min:  %d\n", min(x, y));

    return 0;
}