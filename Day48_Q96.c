#include <stdio.h>

int main()
{
    char str[100];
    int start = 0;
    int end = 0;
    int i;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    while(1)
    {
        if(str[end] == ' ' || str[end] == '\0')
        {
            for(i = end - 1; i >= start; i--)
            {
                printf("%c", str[i]);
            }

            if(str[end] == ' ')
            {
                printf(" ");
                start = end + 1;
            }
            else
            {
                break;
            }
        }

        end++;
    }

    return 0;
}
