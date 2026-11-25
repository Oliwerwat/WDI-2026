#include <stdio.h>

int main()
{
    char imie[20];
    printf("Podaj imie(malymi literami):");
    scanf("%19s", imie);
    imie[0]=imie[0]-32;
    printf("Imie: %s",imie);
}