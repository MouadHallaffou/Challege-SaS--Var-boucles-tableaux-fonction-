#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Challenge 9 : Calcul de la distance entre deux points dans un espace 3D
    float x1,x2,y1,y2,z1,z2,Distance;
    printf("entre x1:");
    scanf("%f",&x1);
    printf("entre x2:");
    scanf("%f",&x2);
    printf("entre y1:");
    scanf("%f",&y1);
    printf("entre y2:");
    scanf("%f",&y2);
    printf("entre z1:");
    scanf("%f",&z1);
    printf("entre z2:");
    scanf("%f",&z2);
    Distance=sqrt(pow((x2-x1),2) + pow((y2-y1),2) + pow((z2-z1),2));
    printf("la distance XYZ est %.2f",Distance);
    return 0;
}
