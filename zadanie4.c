#include <stdio.h>

int main ()  {
  int counter;
  printf("Ile liczb: ");
  scanf("%d",&counter);

  //tablica
  int tab[counter];

  //for
  for(int i = 0; i < counter; i = i + 1 ){
    printf("Podaj %d liczbe: \n",(i+1));
    scanf("%d", &tab[i]);


  }

  for(int i=0; i<counter; i=i+1){
        printf("%d,", tab[i]);

      }
printf("\n");

//while
      int i=0;
      while (i < counter) {
        printf("%d,", tab[i]);
        i=i+1;
  }
  printf("\n");

    return 0;
  }
