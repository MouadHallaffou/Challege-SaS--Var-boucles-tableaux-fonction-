#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Challenge 10 : Volume d'une sphère:
    float R,VoulumeSphere;
    const Pi=3.14;
    printf("entre le rayon du cercle: ");
    scanf("%f",&R);
    VoulumeSphere= (4/3) * Pi * (pow(R,3));
    printf("le Volume de la sphère X est: %.2f m³",VoulumeSphere);
    return 0;
}
