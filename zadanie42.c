#include <stdio.h>

//zadanie 2

int main()
{
        int a, b;
        int wynik;

//podanie a i b

        printf("Podaj a: ");
        scanf("%d",&a);

        printf("Podaj b: ");
        scanf("%d",&b);

//warunek a<b

        while( a > b )
        {
        printf("Liczba 'b' musi być większa od 'a'. Podaj liczbe b: ");
        scanf("%d", & b );
        }

//obliczenia

  {
  wynik = ((a+b)*(b-a+1)/2);
    }

//wynik

  printf("Suma elementow pomiędzy 'a' i 'b' to %d\n", wynik);



        return 0;
}
