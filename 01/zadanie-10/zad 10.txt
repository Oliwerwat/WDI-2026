#include <stdio.h>

int main()
{
    int o1,o2,o3,o4,o5,ilen;
    float srednia;
    printf("podaj 5 ocen:");
    scanf("%d",&o1);
    scanf("%d",&o2);
    scanf("%d",&o3);
    scanf("%d",&o4);
    scanf("%d",&o5);
    srednia=(o1+o1+o3+o4+o5)/5.0;
    printf("srednia:%.2f",srednia);
    if (o1>2 && o2>2 && o3>2 && o4>2 && o5>2)
    {
        printf("\nnie ma niedostatecznych");
        return 0;
    }
    else
    {
        ilen=0;
        printf("\noceny niedostateczne: ");
        if (o1<3)
        {
            ilen+=1;
        }
        if (o2<3)
        {
            ilen+=1;
        }
        if (o3<3)
        {
            ilen+=1;
        }
        if (o4<3)
        {
            ilen+=1;
        }
        if (o5<3)
        {
            ilen+=1;
        }
        printf("%d",ilen);
    }
 return 0;
}