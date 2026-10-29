#include <stdio.h>

int main()
{
    int l1,l2,wieksza,mniejsza;
    {
        printf("Podaj 2 liczby:");
        scanf("%d",&l1);
        scanf("%d",&l2);
        if (l1==l2)
        {
            printf("liczby sa takie same, nie ma wiekszej lub mniejszej\n");
            printf("%d=%d",l1,l2);
        }
        else
        {
        if (l1>l2)
        {
            printf("Wieksza:%d\n",l1);
            printf("Mniejsza:%d\n",l2);
            printf("%d>%d",l1,l2);
        }
        else
        {
        if (l1<l2)
        {
            printf("Wieksza:%d\n",l2);
            printf("Mniejsza:%d\n",l1);
            printf("%d<%d",l1,l2);
        }
        }
        }
    }
    
}