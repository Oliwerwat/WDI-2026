#include <stdio.h>

void bubble_sort(int tab[], int rozmiar) {
    for (int i = 0; i < rozmiar - 1; i++) {
        for (int j = 0; j < rozmiar - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

int main() {
    int tab[10];
    int rozmiar = 10;

    printf("Podaj 10 liczb całkowitych:\n");
    for (int i = 0; i < rozmiar; i++) {
        scanf("%d", &tab[i]);
    }

    bubble_sort(tab, rozmiar);

    printf("Posortowana tablica: ");
    for (int i = 0; i < rozmiar; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}