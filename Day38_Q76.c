// Q76. Checking if a matrix is symmetric
// ANSWER:

#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols;
    int i, j;
    int symmetric = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    if(rows != cols)
    {
        printf("Matrix is not symmetric.");
        return 0;
    }

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
        for(j = 0; j < cols; j++)
        {
            if(a[i][j] != a[j][i])
            {
                symmetric = 0;
            }
        }
    }

    if(symmetric == 1)
    {
        printf("Matrix is symmetric.");
    }
    else
    {
        printf("Matrix is not symmetric.");
    }

    return 0;
}
