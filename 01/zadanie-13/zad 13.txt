#include <stdio.h>

int main()
{
    int suma,liczba,n;
    float srednia;
    suma=0;
    printf("podaj n liczb:");
    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {
        liczba=0;
        scanf("%d",&liczba);
        suma+=liczba;
    }
    srednia=(float)suma/n;
    printf("suma: %d, srednia: %.2f",suma,srednia);
    return 0;
}