#include <stdio.h>

int f(int n)
{
    int wynik=0;
    switch (n)
    {
        case 1:
            wynik=1;break;
        case 2:
             wynik=2;break;
        case 3:
             wynik=3; break;
        default:
            wynik=f(n-1)*f(n-2)-f(n-3);
            break;
    }
    return wynik;
}
int main()
{
    printf("wynik f(6):%d",f(6));
}