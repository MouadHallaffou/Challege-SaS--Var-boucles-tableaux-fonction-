#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Conversion de la distance:
    float DK, DYards;
    printf("entre la distance en kilomètres: ");
    scanf("%f",&DK);
    DYards=DK* 1093.61;
    printf("la transformation en yards: %.2f",DYards);

    return 0;
}
