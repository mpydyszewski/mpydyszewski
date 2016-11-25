#include <stdio.h>

//zadanie 4

int main()
{
        int a;
        int x;
        int silnia=1;

//podanie liczby

        printf("Podaj liczbe: ");
        scanf("%d",&x);

//obliczenie

        for(a=1;a<=x;a++)
        silnia=silnia*a;

// wynik

        printf("\n%d! = %d \n",x,silnia);

        return 0;
}
