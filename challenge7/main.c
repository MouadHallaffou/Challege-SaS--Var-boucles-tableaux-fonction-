#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nbr1, nbr2, nbr3 ,Moyenne;
    printf("entre le nembre 1: ");
    scanf("%f",&nbr1);
    printf("entre le nembre 2: ");
    scanf("%f",&nbr2);
    printf("entre le nembre 3: ");
    scanf("%f",&nbr3);
    Moyenne=((nbr1*2) + (nbr2*3) + (nbr3*5))/3;
    printf("la moyenne est de %.2f",Moyenne);
    return 0;
}
