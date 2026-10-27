#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100];
    char text[200];

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");

    if(fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    getchar();

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("Text appended successfully.\n");

    return 0;
}
