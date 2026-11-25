#include <stdio.h>
#include <ctype.h>

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
    
    int licz[26]={0};
    char tekstt[256];
    printf("podaj tekst:");
    scanf("%255s", tekstt);
   for (int i=0;tekstt[i]!='\0';i++)
   {
        if (tekstt[i]>96 && tekstt[i]<123)
    {
        tekstt[i]= toupper(tekstt[i]);
    }
   }

    for (int i=0;tekstt[i]!='\0';i++)
    {
        if (tekstt[i]>64 && tekstt[i]<91)
        {
            int kod=tekstt[i];
            licz[kod-65]++;
        }

    }
    int czyanag=1;
    for (int i=0;i<25;i++)
    {
        if (licz[i]!=licznik[i])
        {
            czyanag=0;
            break;
        }
    }    
    if (czyanag==1)
    {
        printf("sa anagramami");
    }
    else
    {
        printf("nie sa anagramami");
    }
return 0;
}
