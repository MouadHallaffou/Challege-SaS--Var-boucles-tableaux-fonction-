#include <stdio.h>

int main()
{
    int z,i,j;
    printf("Entrez un nombre:");
    scanf("%d",&z);

    for(i=0; i < z; i++)
    {
        for(j=1; j <= (z*2)-1; j++)
        {
            if (j >= z-i && j <= z+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
