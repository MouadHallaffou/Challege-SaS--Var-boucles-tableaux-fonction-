#include <stdio.h>
#include <stdlib.h>

int somme(int A, int B )
{
    int somme = A+B;
    return somme;
}
//Challenge 1 : Fonction de Somme

int main()
{
    int a,b,s;
    printf("entre la valeur de a: ");
    scanf("%d",&a);
    printf("entre la valeur de b: ");
    scanf("%d",&b);
    s=somme(a,b);
    printf("%d",s);


    return 0;
}
