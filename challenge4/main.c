#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Challenge 4 : Conversion de la vitesse.
    float Vkilometreheure,Vmetreseconde;
    printf("entre la vitesse en kilom�tres par heure (km/h):");
    scanf("%f",&Vkilometreheure);
    Vmetreseconde= Vkilometreheure * 0.27778;
    printf("la vitesse en m�tres par seconde (m/s) est:%.3f",Vmetreseconde);

    return 0;
}
