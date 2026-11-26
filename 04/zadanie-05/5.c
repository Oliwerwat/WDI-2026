#include <stdio.h>

int main()
{
    char tekst[10];
    printf("napisz(max 10):");
    scanf("%9s",tekst);
    int czyliczby=1;
    for (int i=0;tekst[i]!='\0';i++)
    {
        if (tekst[i]<48 || tekst[i]>57)
        {
            czyliczby=0;
        }
    }
   if (czyliczby == 1) 
   {
        int liczba = 0;

        for (int i = 0; tekst[i] != '\0'; i++)
        {
            int cyfra = tekst[i] - 48;
            liczba = liczba * 10 + cyfra;
        }

        printf("To liczba calkowita.\nWartosc int: %d\n", liczba);
   }
    else
    {
        printf("Nie jest liczba calkowita");
    }
return 0;
}