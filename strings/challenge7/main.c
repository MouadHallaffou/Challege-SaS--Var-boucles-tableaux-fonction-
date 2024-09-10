#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    //Challenge 7 : Conversion en Majuscules.

    char miniscule[20];
    printf("entre un mot: ");
    scanf("%s",&miniscule);
    printf("%s",strupr(miniscule));


    return 0;
}
