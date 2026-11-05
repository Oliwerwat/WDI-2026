#include <stdio.h>

int main()
{
    char klasa;
    printf("wybierz klase spoleczna:");
    scanf("%c",&klasa);
    switch(klasa)
    {
        case 'P':
            printf("Poddany może: czcic Króla.");
        case 'G':
            printf("Giermek może: czcic Króla, wchodzić na dziedziniec zamkowy codziennie");
        case 'R':
            printf("Rycerz może: czcic Króla, wchodzić na dziedziniec zamkowy codziennie, wchodzic do zamku codziennie oraz rekrutowac giermkow."); 
            break;
        case 'M':
            printf("Mag może: czcic Króla, wchodzić na dziedziniec zamkowy codziennie, wchodzic do zamku codziennie oraz rekrutowac giermkow, moze rozmawiać z Królem.");
            break;
        case 'K':
            printf("Królowa może: czcic Króla, wchodzić na dziedziniec zamkowy codziennie, wchodzic do zamku codziennie oraz rekrutowac giermkow, moze rozmawiać z Królem, moze rozkazywac Królowi");
            break;
          
    }
    return 0;
}