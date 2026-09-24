#include <stdio.h>

int main()
{
    char str[100];
    int i, j;
    int found = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j] && str[i] >= 'a' && str[i] <= 'z')
            {
                printf("%c", str[i]);
                found = 1;
                break;
            }
        }

        if(found == 1)
        {
            break;
        }
    }

    if(found == 0)
    {
        printf("No repeating lowercase alphabet");
    }

    return 0;
}
