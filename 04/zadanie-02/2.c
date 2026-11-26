#include <stdio.h>
#include <ctype.h>


int main()
{
    char imie[20];
    printf("podaj imie(malymi literami):");
    scanf("%19s",imie);
    imie[0]=toupper(imie[0]);
    printf("Imie: %s",imie);
    return 0;
}