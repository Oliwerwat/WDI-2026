#include <stdio.h>

int main()
{
    int n,suma;
    suma=0;
    printf("podaj n: ");
    scanf("%d",&n);
    for (int i=0; i<=n; i++)
    {
        suma+=(i*i);
    }
    printf("suma:%d",suma);
    return 0;
}