#include <stdio.h>

float dodaj_n_do_wyniku(float aktualny_wynik)
{
    int n;
    float liczba;

    printf("Ile liczb chcesz dodac do wyniku? ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Blad: Ilosc liczb musi byc wieksza od 0!\n");
        return aktualny_wynik;
    }

    for (int i = 1; i <= n; i++)
    {
        printf("Podaj liczbe %d: ", i);
        scanf("%f", &liczba);
        aktualny_wynik += liczba;
    }

    return aktualny_wynik;
}

float odejmuj_do_zera(float aktualny_wynik)
{
    float liczba;

    while (1)
    {
        printf("Podaj liczbe do odjecia (0 = koniec): ");
        scanf("%f", &liczba);

        if (liczba == 0)
        {
            break;
        }

        aktualny_wynik -= liczba;
    }

    return aktualny_wynik;
}

float mnozenie(float a, float b)
{
    return a * b;
}

float dzielenie(float a, float b)
{
    if (b == 0)
    {
        printf("Blad: Nie mozna dzielic przez zero!\n");
        return a;
    }
    return a / b;
}

float potega(float podstawa, int wykladnik)
{
    float w = 1.0f;
    for (int i = 0; i < wykladnik; i++)
    {
        w *= podstawa;
    }
    return w;
}

float kwadrat(float liczba)
{
    return liczba * liczba;
}

int silnia(int n)
{
    int w = 1;
    for (int i = 1; i <= n; i++)
    {
        w *= i;
    }
    return w;
}

int main()
{
    float wynik = 0.0f;
    int opcja = 0;

    printf("Podaj poczatkowa liczbe: ");
    scanf("%f", &wynik);

    while (opcja != 9)
    {
        printf("Aktualny wynik: %.2f\n", wynik);
        printf("1. Dodaj N liczb do wyniku\n");
        printf("2. Odejmuj od wyniku (do podania 0)\n");
        printf("3. Pomnoz (*)\n");
        printf("4. Podziel (/)\n");
        printf("5. Potegowanie (^)\n");
        printf("6. Kwadrat (^2)\n");
        printf("7. Silnia (!)\n");
        printf("8. Zresetuj\n");
        printf("9. Zakoncz program\n");
        printf("Wybierz opcje (1-9): ");
        scanf("%d", &opcja);

        switch (opcja)
        {
            case 1:
                wynik = dodaj_n_do_wyniku(wynik);
                break;

            case 2:
                wynik = odejmuj_do_zera(wynik);
                break;

            case 3:
            {
                float b;
                printf("Podaj liczbe do pomnozenia: ");
                scanf("%f", &b);
                wynik = mnozenie(wynik, b);
                break;
            }

            case 4:
            {
                float b;
                printf("Podaj dzielnik: ");
                scanf("%f", &b);
                wynik = dzielenie(wynik, b);
                break;
            }

            case 5:
            {
                int c;
                printf("Podaj wykladnik: ");
                scanf("%d", &c);
                if (c < 0)
                {
                    printf("Blad: Wykladnik musi byc calkowity\n");
                }
                else
                {
                    wynik = potega(wynik, c);
                }
                break;
            }

            case 6:
                wynik = kwadrat(wynik);
                break;

            case 7:
                if (wynik != (int)wynik || wynik < 0)
                {
                    printf("Silnia musi byc naturalna.\n");
                }
                else
                {
                    wynik = (float)silnia((int)wynik);
                }
                break;

            case 8:
                printf("Podaj nowy start: ");
                scanf("%f", &wynik);
                break;

            case 9:
                printf("Koniec programu.\n");
                break;

            default:
                printf("Wybierz liczbe od 1 do 9.\n");
                break;
        }
    }

    return 0;
}