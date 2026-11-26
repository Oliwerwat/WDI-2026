#include <stdio.h>
#include <ctype.h>

int main()
{
    int licznik[26]={0};
    char text[256];
    printf("podaj tekst:");
    scanf("%255s", text);
   for (int i=0;text[i]!='\0';i++)
   {
        if (text[i]>96 && text[i]<123)
    {
        text[i]= toupper(text[i]);
    }
   }

    for (int i=0;text[i]!='\0';i++)
    {
        if (text[i]>64 && text[i]<91)
        {
            int kod=text[i];
            licznik[kod-65]++;
        }

    }
      for (int i = 0; i < 26; i++) 
    {
        if (licznik[i] > 0) 
        {
            printf("%c: %d\n", i + 65, licznik[i]);
        }
    }
return 0;
}