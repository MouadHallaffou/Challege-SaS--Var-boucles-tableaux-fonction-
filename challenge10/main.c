#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Challenge 10 : Volume d'une sph�re:
    float R,VoulumeSphere;
    const Pi=3.14;
    printf("entre le rayon du cercle: ");
    scanf("%f",&R);
    VoulumeSphere= (4/3) * Pi * (pow(R,3));
    printf("le Volume de la sph�re X est: %.2f m�",VoulumeSphere);
    return 0;
}
