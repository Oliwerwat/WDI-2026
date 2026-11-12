#include <stdio.h>

float oblicz_srednia(int tab[], int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        suma += tab[i];
    }
    return (float)suma / rozmiar;
}

int main() {
    int tab[5];
    int rozmiar = 5;

    printf("Podaj 5 liczb całkowitych:\n");
    for (int i = 0; i < rozmiar; i++) {
        scanf("%d", &tab[i]);
    }

    float srednia = oblicz_srednia(tab, rozmiar);
    printf("Średnia wynosi: %.2f\n", srednia);

    printf("Elementy większe od średniej: ");
    for (int i = 0; i < rozmiar; i++) {
        if (tab[i] > srednia) {
            printf("%d ", tab[i]);
        }
    }
    return 0;
}