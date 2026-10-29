#include <stdio.h>

int main()
{
    int wynik;
    {
    int l1,l2;
    {

        printf("Podaj 2 liczby:");
        scanf("%d",&l1);
        scanf("%d",&l2);
    }
    char znak;
    {
        printf("\npodaj znak dzialania (+, -, *, /, %%):");
        scanf(" %c",&znak);
    }
    if (znak=='+')
    {
        wynik=(l1+l2);   
    }
    if (znak=='-')
    {
        wynik=(l1-l2);
    }
    if (znak=='*')
    {
        wynik=(l1*l2);
    }
    if (znak=='/')
    {
        if (l2==0)
            {
            printf("nie mozna dzielic przez zero");
            return 0;
            }
        else
            {
            wynik=l1/l2;
            }
    }
    if (znak=='%')
    {
        if (l2==0)
            {
            printf("nie mozna dzielic przez zero");
            return 0;
            }
        else
            {
                wynik=l1%l2;
            }
        
    }
    printf("Wynik to: %d",wynik);
    }
}