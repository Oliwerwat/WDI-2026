#include <stdio.h>

int main()
{
    int wsz,godz,min,sek;
    {
        printf("podaj liczbe sekund:");
        scanf("%d",&wsz);
        godz=(wsz/3600);
        min=((wsz%3600)/60);
        sek=(wsz%60);
        printf("%d h %d min %d sek\n",godz,min,sek);
    }
    
    return 0;
}