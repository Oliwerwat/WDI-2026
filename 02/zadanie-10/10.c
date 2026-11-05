#include <stdio.h>

int potega(int liczba,int wykl)
{
    int wynik=1;
    for (int i=1;i<wykl+1;i++)
    {
        wynik*=liczba;
    }
    return wynik;
}
int main()
{
    printf("liczba:3,wykladnik:4\n");
    printf("potega z tego:%d",potega(3,4));
    return 0;
}