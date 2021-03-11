#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    char znak;
    for(i=1;i<=6;i++)
    {
        for(znak='F';znak<('F'+i);znak++)
            printf("%c",znak);
        printf("\n");
    }
    return 0;
}
