#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Challenge 4 : Inversion d'un Entier:

    int x,i,InvrX=0;
    printf("entre un entier: ");
    scanf("%d",&x);

    while(x!=0){
        InvrX=InvrX*10;
        InvrX=InvrX+x%10;
        x=x/10;
    }
    printf("%d",InvrX);

    return 0;
}
