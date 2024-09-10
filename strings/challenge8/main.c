#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    //Challenge 7 : Conversion en Majuscules.

    char majuscule[20];
    printf("entre un mot: ");
    scanf("%s",&majuscule);
    printf("%s",strlwr(majuscule));


    return 0;
}
