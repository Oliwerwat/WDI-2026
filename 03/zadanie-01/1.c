#include <stdio.h>

int fib(int n)
{
    int lp1=0,lp2=1,wynik=0,suma=1;
    if (n==1)
    {
        printf("wynik: 1");
    }
    if (n==2)
    {
        printf("wynik: 2");
    }
    else
    {
    for (int i=2;i<=n;i++)
    {
        wynik=lp1+lp2;
        lp1=lp2;
        lp2=wynik;
        suma+=wynik;
    }
    }
    return suma;
}
int main()
{
printf("suma 5 kolejnych wyrazow fibpnacciego to: %d",fib(5));
return 0;
}