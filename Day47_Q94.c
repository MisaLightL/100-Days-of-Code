#include <stdio.h>

int main()
{
    char str[100];
    char longest[100];
    int i = 0, j = 0;
    int max = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    while(str[i] != '\0')
    {
        char word[100];
        int len = 0;

        while(str[i] != ' ' && str[i] != '\0')
        {
            word[len] = str[i];
            len++;
            i++;
        }

        word[len] = '\0';

        if(len > max)
        {
            max = len;

            for(j = 0; j <= len; j++)
            {
                longest[j] = word[j];
            }
        }

        if(str[i] == ' ')
            i++;
    }

    printf("%s", longest);

    return 0;
}
