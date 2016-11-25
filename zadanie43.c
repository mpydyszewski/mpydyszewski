#include <stdio.h>

//zadanie 3

int main ()  {
  int x;
  int suma = 0;
  int wantContinue;
  printf("Czy kontynuować 1-tak/0-nie ?");
  scanf("%d",&wantContinue);

//warunek

      while (wantContinue == 1) {
        printf("Podaj liczbe : \n");
        scanf("%d", &x);
        suma=suma + x*x;
        printf("Czy kontynuować 1-tak/0-nie ");
        scanf("%d",&wantContinue);
  }

//wynik

  printf("%d\n", suma);

    return 0;
}
