#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char A[20];
    char B[20];
    printf("entre le nom:");
    scanf("%s",&A);
    printf("entre le nom:");
    scanf("%s",&B);
    printf("%s",strcat(A,B));

    return 0;
}
