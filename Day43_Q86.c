#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, n = 0;
    int palindrome = 1;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while(str[n] != '\0')
    {
        n++;
    }

    for(i = 0; i < n / 2; i++)
    {
        if(str[i] != str[n - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    if(palindrome == 1)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
