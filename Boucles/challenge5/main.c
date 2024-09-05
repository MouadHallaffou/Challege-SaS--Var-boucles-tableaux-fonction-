#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Challenge 5 : Somme des N Nombres:
    int i,n,somme=0;
    printf("entre le n: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        somme=somme+i;
    }
    printf("la somme des nbr de 1 a %d est de %d",i-1,somme);

    return 0;
}
