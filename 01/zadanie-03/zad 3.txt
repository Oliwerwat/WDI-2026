#include <stdio.h>

int main()
{
    
    char inic;
    
    {
        printf("podaj pierwsza litere twojego imienia:");
        scanf("%c",&inic);
    }
    int wiek;
    {
        printf("podaj swoj wiek:");
        scanf("%d",&wiek);
    }
    printf("\n inicjal:%c",inic);
    printf(" Pwiek:%d\n",wiek);
    return 0;
}