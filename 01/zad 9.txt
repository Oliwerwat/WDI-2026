#include <stdio.h>

int main()
{
    int l1,l2;
    printf("Podaj 2 liczby:");
    scanf("%d",&l1);
    scanf("%d",&l2);
    if (l1%l2==0)
    {
    printf("jest podzielna");
    }
    else
    {
        printf("nie jest podzielna");
    }
}