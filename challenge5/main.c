#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;
    printf("entre la température en Celsius pour affiche l'état de l'eau ");
    scanf("%f",&c);
    if(c<0)
        printf("l'etat de l'eaux est Solide");
    else if(0 <= c && c <= 100)
        printf("l'etat de l'eaux est Liquide");
    else
        printf("l'etat de l'eaux est Gaz");

    return 0;
}
