#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 4; j++)
        {
            printf("*\n");
        }

        if(i != 3)
            printf("\n");
    }

    return 0;
}
