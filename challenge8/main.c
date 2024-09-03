#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Challenge 8 : Calcul de la moyenne géométrique
    float a, b, c ,MoyenneGeometrique;
    printf("entre le nembre 1: ");
    scanf("%f",&a);
    printf("entre le nembre 2: ");
    scanf("%f",&b);
    printf("entre le nembre 3: ");
    scanf("%f",&c);
    MoyenneGeometrique =pow((a * b * c),(1/3));
    printf("%f",MoyenneGeometrique);
    return 0;
}
