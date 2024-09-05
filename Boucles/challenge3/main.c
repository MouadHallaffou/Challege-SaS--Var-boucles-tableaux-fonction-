#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i=2;
    printf("entre un nombre: ");
    scanf("%d",&N);

    while(N%i != 0 && i < N)
    {
        i++;
    }

    if (i == N)
        printf("%d est un nombre premier",N);
    else
        printf("%d n'est pas un nombre premier",N);


return 0;
}
