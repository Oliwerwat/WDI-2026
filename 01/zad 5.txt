#include <stdio.h>

int main()
{
    int ocena1,ocena2,ocena3,ocena4,ocena5;
    {
    printf("Podaj 5 ocen:");
    scanf("%d",&ocena1);
    scanf("%d",&ocena2);
    scanf("%d",&ocena3);
    scanf("%d",&ocena4);
    scanf("%d",&ocena5);
    float srednia;
    {
        srednia=((ocena1+ocena2+ocena3+ocena4+ocena5)/5.0);
        printf("srednia ocen:%f",srednia);
    }
    }
}