#include <stdio.h>

int fib(int n)
{
    int lp1=0,lp2=1,wynik=0;
    if (n==1 || n==2)
    {
        printf("wynik: 1");
    }
    else
    {
    for (int i=2;i<=n;i++)
    {
        wynik=lp1+lp2;
        lp1=lp2;
        lp2=wynik;
    }
    }
    return wynik;
}
int main()
{
printf("5  wyraz ciagu fibpnacciego to: %d",fib(7));
return 0;
}