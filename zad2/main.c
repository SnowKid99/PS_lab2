#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j;
    char znak;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<i;j++)
            printf("$");
        printf("\n");
    }
    return 0;
}
