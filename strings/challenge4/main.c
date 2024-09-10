#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //Challenge 4 : Comparaison de Chaînes

    char A[20];
    char B[20];
    printf("entre le premier mot:");
    scanf("%s",&A);
    printf("entre le deuxieme mot:");
    scanf("%s",&B);
    if(strcmp(A,B)==0)
    {
        printf("A == B");
    }
    else
    {
        printf("A ## B");
    }

    return 0;
}
