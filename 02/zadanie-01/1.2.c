#include <stdio.h>

int main()
{
    int n,max,min,suma=0,ilen=0;
    float srednia;
    scanf("%d",&n);
    ilen+=1;
    max=n;
    min=n;
    suma+=n;
    while (n%2==0)
        {
            scanf("%d",&n);
            if (ilen==0)
            {
                min=n;
                max=n;
            }
            ilen+=1;
            suma+=n;
            if (n>max)
            {
                max=n;
            }
            if (n<min)
            {
                min=n;
            }

        }
    if (ilen>0)
        {
             srednia=(float)suma/ilen;
            printf("najw=%d,najm=%d,suma=%d,srednia=%f",max,min,suma,srednia);
          
        }
        else
        {
            printf("najw=0,najm=0,suma=0,srednia=0");
        }
   
   
    return 0;
}
  
