#include <stdio.h>

int main ()  {
  int x;
  int suma = 0;
  int wantContinue;
  printf("Czy kontynuować 1-tak/0-nie ?");
  scanf("%d",&wantContinue);

//while

      while (wantContinue == 1) {
        printf("Podaj liczbe : \n");
        scanf("%d\n", &x);
        suma=suma+x;
        printf("CZy kontynuować 1-tak/0-nie ");
        scanf("%d",&wantContinue);
  }
  printf("\n");

    return 0;
  }
