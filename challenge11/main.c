#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Challenge 11 : Surface d'un rectangle

     float Surface,longueur,largeur ;
     printf("entre la  longeur: ");
     scanf("%f",&longueur);
     printf("entre la  largeur: ");
     scanf("%f",&largeur);
     Surface = longueur * largeur;
     printf("la surface du rectangle X est: %.2f",Surface);

    return 0;
}
