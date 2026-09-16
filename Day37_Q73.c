// Q73. Find the sum of each row of a matrix and store it in an array
// ANSWER:

#include <stdio.h>

int main()
{
    int a[10][10];
    int sum[10];
    int rows, cols;
    int i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < rows; i++)
    {
        sum[i] = 0;

        for(j = 0; j < cols; j++)
        {
            sum[i] = sum[i] + a[i][j];
        }
    }

    printf("Sum of each row:\n");

    for(i = 0; i < rows; i++)
    {
        printf("Row %d = %d\n", i + 1, sum[i]);
    }

    return 0;
}
