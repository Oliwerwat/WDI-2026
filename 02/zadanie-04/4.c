#include <stdio.h>

int main()
{
    int l1 = 0, l2 = 0, opcja = 0;
    char znak = '+';

    while (opcja != 4)
    {
        printf("\nAktualny wynik (%d %c %d) = ", l1, znak, l2);        
        if (l2 == 0 && (znak == '/' || znak == '%')) 
        {
            printf("Błąd (dzielenie przez 0)\n");
        } 
        else 
        {
            switch (znak) 
            {
                case '+': printf("%d\n", l1 + l2); break;
                case '-': printf("%d\n", l1 - l2); break;
                case '*': printf("%d\n", l1 * l2); break;
                case '/': printf("%.2f\n", (float)l1 / l2); break;
                case '%': printf("%d\n", l1 % l2); break;
            }
        }

        printf("1. Zmień l1 | 2. Zmień l2 | 3. Zmień znak | 4. Wyjście\nWybór: ");
        scanf("%d", &opcja);

        switch (opcja) 
        {
            case 1: printf("Nowa pierwsza liczba: "); scanf("%d", &l1); break;
            case 2: printf("Nowa druga liczba: "); scanf("%d", &l2); break;
            case 3: printf("Nowy znak (+,-,*,/,%%): "); scanf(" %c", &znak); break;
        }
    }

    return 0;
}