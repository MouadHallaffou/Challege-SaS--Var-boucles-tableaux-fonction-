#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    //Challenge 5 : Inversion de Chaîne

    char A[20];
    printf("entre votre mot: ");
    scanf("%s",&A);
    printf("l'inverse:%s",strrev(A));



    return 0;
}
