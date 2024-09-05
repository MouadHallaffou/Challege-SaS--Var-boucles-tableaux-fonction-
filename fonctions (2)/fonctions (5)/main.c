#include <stdio.h>
#include <stdlib.h>
int A ,B;
void saisir(){
    printf("entre a : ");
    scanf("%d",&A);
    printf("entre b : ");
    scanf("%d",&B);
}
int Minimum(int A, int B)
{
    int Min;
    if(A-B>0)
        Min = B;
    else
        Min = A;
    return Min;
}
int Maximum(int A, int B)
{
    int Max;
    if(A-B>0)
        Max = A;
    else
        Max = B;
    return Max;
}
//Challenge 3 : Fonction de Maximum:
//Challenge 4 : Fonction de Minimum:

int main()
{
    int Max,Min;
    saisir(A,B);
    Min=Minimum(A,B);
    Max=Maximum(A,B);
    printf("le max %d\n",Max);
    printf("le min %d\n",Min);
    return 0;
}
