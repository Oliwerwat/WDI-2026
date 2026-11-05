#include <stdio.h>

int potegar(int liczba, int wykladnik)
{
    if (wykladnik == 0)
    {
        return 1;
    }
    return liczba * potegar(liczba, wykladnik - 1);
}
int main()
{
    printf("liczba:2,wykladnik:4\n");
    printf("potega z tego:%d",potegar(2,4));
    return 0;
}