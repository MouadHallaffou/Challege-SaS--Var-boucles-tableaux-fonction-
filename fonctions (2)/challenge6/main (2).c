#include <stdio.h>
#include <stdlib.h>

//Challenge 6 : Fonction de Fibonacci:

int main()
{
    int n ;
    printf("entre le terme: ");
    scanf("%d",&n);
    if(n<1){
        printf("zero hors champs");
    }
    else if(n==1 || n==2){
        printf("u%d=%d",n,n);
    }
    else{
        int U1=1,U2=1,Un,i;
        for(i=3;i<=n;i++){
            Un=U1+U2;
            U1=U2;
            U2=Un;
                    printf("%d",Un);

        }
    }


    /*�crivez une fonction en C qui calcule le n-i�me terme de la suite de Fibonacci.
    La fonction doit prendre un entier en param�tre et retourner le n-i�me terme.
    Cr�ez un programme principal qui utilise cette fonction pour afficher le terme de
    Fibonacci demand�.*/


    return 0;
}
