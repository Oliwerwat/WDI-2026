#include <stdio.h>

int main()
{
    float liczba;
    {
        printf("podaj liczbe:");
        scanf("%f", &liczba);

        printf("\n Ta liczba z 1 miejscem po przecinku %.1f\n ",liczba);
        printf("Ta liczba z 5 miejscami po przecinku %.3f\n ",liczba);
        printf("Ta liczba z 5 miejscami po przecinku %.5f\n ",liczba);

    }
    return 0;
}