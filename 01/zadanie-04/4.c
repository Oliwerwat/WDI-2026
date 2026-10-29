#include <stdio.h>

int main()
{
    int liczba1,liczba2,liczba3;
    {
    printf("podaj 3 liczby:");
    scanf("%d",&liczba1);
    scanf("%d",&liczba2);
    scanf("%d",&liczba3);
    printf("Wynik dodawania:%d\n",liczba1+liczba2+liczba3);
    printf("Roznica 2 pierwszych:%d\n",liczba1-liczba2);
    printf("iloczyn pierwszej i trzeciej:%d\n",liczba1*liczba3);
    printf("iloraz trzeciej i drugiej:%d\n",liczba3/liczba2);
    }
    return 0;
}