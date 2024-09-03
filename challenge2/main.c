#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C,K;
    printf("entre le degre de la temperature en Celsius: ");
    scanf("%f",&C);
    K=C+273.15;
    printf("la temerature en Kelvin egale de %.2f kelvin",K);
    return 0;
}
