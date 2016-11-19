#include <stdio.h>

int main ()  {
  int x;
  int suma = 0;
  int wantContinue;
  printf("Czy kontynuować 1-tak/0-nie ?");
  scanf("%d",&wantContinue);

//zadanie 3

      while (wantContinue == 1) {
        printf("Podaj liczbe : \n");
        scanf("%d", &x);
        suma=suma + x*x;
        printf("CZy kontynuować 1-tak/0-nie ");
        scanf("%d",&wantContinue);
  }
  printf("%d\n", suma);

    return 0;
  }
