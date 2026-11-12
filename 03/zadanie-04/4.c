#include <stdio.h>

int suma_cyfr(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n % 10) + suma_cyfr(n/10);
}

int main() 
{
    int wynik = suma_cyfr(507);
    printf("Suma cyfr wynosi: %d\n", wynik); 
    return 0;
}