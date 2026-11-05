#include <stdio.h>

int silnia(int n)
{
    int suma=1;
    for (int i=1;i<n+1;i++)
    {
        suma*=i;
    }
    return suma;
}
int main()
{
    printf("silnia z 5:%d",silnia(5));
    return 0;
}