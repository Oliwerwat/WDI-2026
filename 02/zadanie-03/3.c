#include <stdio.h>

int main()
{
    int l1,l2,wynik=0;
    char znak;
    printf("podaj 2 liczby:");
    scanf("%d",&l1);
    scanf("%d",&l2);
    printf("podaj znak miedzy liczbami:");
    scanf(" %c",&znak);
    switch (znak)    
    {
        case '+':
            wynik=l1+l2;
            break;
        case '-':
            wynik=l1-l2;
            break;
        case '*':
            wynik=l1*l2;
            break;
        case '/':
            if (l2==0)
                {
                    printf("nie mozna dzielic przez 0\n");
                }
            else
                {
                    wynik=l1/l2;
                }
            break;
        case '%':
             if (l2==0)
                {
                    printf("nie mozna dzielic przez 0\n");
                }
            else
                {
                    wynik=l1%l2;
                }
            break;

    }
    if (znak=="/" || znak=='%' && l2==0)
    {
        return 0;
    }
    else
    {
        printf("wynik to: %d",wynik);
    }
    return 0;
}