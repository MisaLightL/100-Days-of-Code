#include <stdio.h>

int main()
{
    FILE *fp;
    char name[100];
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    fp = fopen("info.txt", "w");

    if(fp == NULL)
    {
        printf("Error creating file.\n");
        return 1;
    }

    fprintf(fp, "Name: %s", name);
    fprintf(fp, "Age: %d\n", age);

    fclose(fp);

    printf("Data successfully saved.\n");

    return 0;
}
