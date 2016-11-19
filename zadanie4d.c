#include <stdio.h>

//zadanie 4

int main()
{
        int a;
        int x;
        int silnia=1;
        printf("Podaj liczbe: ");
        scanf("%d",&x);
        for(a=1;a<=x;a++)
                silnia=silnia*a;
        printf("\n %d! = %d \n",x,silnia);

        return 0;
}
