#include <stdio.h>

void wyczysc_bufor(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

void usun_nowa_linie(char tekst[]) {
    for (int i = 0; tekst[i] != '\0'; i++) {
        if (tekst[i] == '\n') {
            tekst[i] = '\0';
            break;
        }
    }
}

char przesun_znak(char c, int przesuniecie) {
    int k = przesuniecie % 26;

    if (c >= 'a' && c <= 'z') {
        int offset = (c - 'a' + k) % 26;
        if (offset < 0) {
            offset += 26;
        }
        return (char)('a' + offset);
    }

    if (c >= 'A' && c <= 'Z') {
        int offset = (c - 'A' + k) % 26;
        if (offset < 0) {
            offset += 26;
        }
        return (char)('A' + offset);
    }

    return c;
}

void przetworz_tekst(char tekst[], int klucz, int tryb_szyfrowania) {
    int kierunek = tryb_szyfrowania ? klucz : -klucz;

    for (int i = 0; tekst[i] != '\0'; i++) {
        tekst[i] = przesun_znak(tekst[i], kierunek);
    }
}

int main(void) {
    int klucz = 3;
    int wybor = 0;
    char tekst[256];

    do {
        printf("\n(aktualny klucz: %d)\n", klucz);
        printf("1. Zaszyfruj tekst\n");
        printf("2. Odszyfruj tekst\n");
        printf("3. Ustaw klucz szyfrujacy\n");
        printf("0. Wyjscie\n");
        printf("Wybierz opcje: ");

        if (scanf("%d", &wybor) != 1) {
            printf("Blad odczytu. Podaj liczbe z menu.\n");
            wyczysc_bufor();
            wybor = -1;
            continue;
        }
        wyczysc_bufor();

        switch (wybor) {
            case 1:
                printf("Podaj tekst do zaszyfrowania: ");
                if (fgets(tekst, sizeof(tekst), stdin) != NULL) {
                    usun_nowa_linie(tekst);
                    przetworz_tekst(tekst, klucz, 1);
                    printf("Zaszyfrowany tekst: %s\n", tekst);
                }
                break;

            case 2:
                printf("Podaj tekst do odszyfrowania: ");
                if (fgets(tekst, sizeof(tekst), stdin) != NULL) {
                    usun_nowa_linie(tekst);
                    przetworz_tekst(tekst, klucz, 0);
                    printf("Odszyfrowany tekst: %s\n", tekst);
                }
                break;

            case 3:
                printf("Podaj nowy klucz (liczba calkowita): ");
                if (scanf("%d", &klucz) != 1) {
                    printf("Niepoprawny klucz. Pozostawiono poprzedni (%d).\n", klucz);
                    wyczysc_bufor();
                } else {
                    wyczysc_bufor();
                    printf("Ustawiono klucz: %d\n", klucz);
                }
                break;

            case 0:
                printf("Koniec programu.\n");
                break;

            default:
                printf("Nieznana opcja. Sprobuj ponownie.\n");
                break;
        }
    } while (wybor != 0);

    return 0;
}