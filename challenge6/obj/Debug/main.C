#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    printf("entre la valeur de A: ");
    scanf("%f",&a);
    printf("entre la valeur de B: ");
    scanf("%f",&b);
    printf(" la somme des variables a + b = %.2f\n",a+b);
    printf(" la soustraction de  a - b = %.2f\n",a-b);
    printf(" la multiplication de a x b = %.2f\n",a*b);
    if(b!=0)
    printf(" la division de a sur b = %.2f\n",a/b);
    else
        printf(" la division sur zero est impossible\n");

    return 0;
}