#include <stdio.h>
#include <stdlib.h>

int Produit(int A, int B )
{
    int Produit = A*B;
    return Produit;
}

//Challenge 2 : Fonction de Multiplication

int main()
{
    int a,b,P;
    printf("entre la valeur de a: ");
    scanf("%d",&a);
    printf("entre la valeur de b: ");
    scanf("%d",&b);
    P=Produit(a,b);
    printf("la multiplication de a x b = %d",P);
    return 0;
}
