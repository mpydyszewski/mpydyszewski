#include <stdio.h>

int main() {


   int x = 7;
   int liczb[x];

   int min = 0;
   int max = 0;
   int suma = 0;
   double avg = 0;
   int ponad100 = 0;

   printf("Podaj %d liczb\n", x);

   for (int i = 0; i < x; i++) {
       printf("%d: ", i+1);
       scanf("%d", &liczb[i]);

       if (min > liczb[i] || i == 0) {
          min = liczb[i];
       }

       if (max < liczb[i] || i == 0) {
           max = liczb[i];
       }

       suma = suma + liczb[i];

       if (liczb[i] > 100) {
           ponad100++;
       }
   };

   avg = (double) suma / x;
   printf("Wynik \n");
   printf("Najmniejsza: %d\n", min);
   printf("Największa:  %d\n", max);
   printf("Średnia:     %f\n", avg);
   printf("Liczby >100: %d\n", ponad100);

   return 0;
}
