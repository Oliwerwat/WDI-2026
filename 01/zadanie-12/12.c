#include <stdio.h>

int main()
{
    int l1,suma;
    suma=0;
    printf("podaj liczbe:");
    scanf("%d",&l1);
    while (l1>0)
    {
        suma+=l1;
        l1-=1;
    }
    printf("\nsuma: %d",suma);
}