#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x;
    printf("entre le nr de multipl: ");
    scanf("%d",&x);
    for(i=0;i<=10;i++){
        printf("%d x %d = %d\n",x,i,x*i);
    }
    return 0;
}
