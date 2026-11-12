#include <stdio.h>

int floor(float x) {
    int wynik = (int)x;
    if (x < 0 && x != (float)wynik) 
    {
        wynik = wynik - 1;
    }
    return wynik;
}

int ceiling(float x) {
    int wynik = (int)x;
    if (x > 0 && x != (float)wynik) {
        wynik = wynik + 1;
    }
    return wynik;
}

int my_round(float x) {
    if (x >= 0) 
    {
        return (int)(x + 0.5f);
    } else 
    {
        return (int)(x - 0.5f);
    }
}