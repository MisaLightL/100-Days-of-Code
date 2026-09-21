/* Q85. Reverse a string
	ANSWER:   	*/

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, n = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while(str[n] != '\0')
    {
        n++;
    }

    for(i = n - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}
