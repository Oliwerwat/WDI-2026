#include <stdio.h>

int main()
{
    int l1;
    printf("podaj liczbe:");
    scanf("%d",&l1);
    if (l1%2==0 && l1>0)
    {
        printf("liczba jest dodatnia i parzysta");
    }
    else
    {
        printf("liczba nie jest parzysta i dodatnia");
    }
}