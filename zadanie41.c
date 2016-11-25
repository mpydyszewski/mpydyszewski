#include <stdio.h>

//zadanie 1

          int main() {

              int i, a, b;

//podanie a i b

              printf("Podaj liczbe a: " );
              scanf("%d", & a );

              printf("Podaj liczbe b: " );
              scanf("%d", & b );

//warunek a<b

              while( a > b )
              {
                  printf("Liczba 'b' musi być większa od 'a'. Podaj liczbe b: ");
                  scanf("%d", & b );
              }

//wynik

              printf ("Ciąg liczb od 'a' do 'b': \n");
              for( i=a; i<=b; i++ )
              printf ("%d ", i);
              printf ("\n");

              return 0;
          }
