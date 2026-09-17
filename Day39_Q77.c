/* Q77. Check if the elements on the diagonal of a matrix are distinct
ANSWER:  */

#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols;
    int i, j;
    int distinct = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    if(rows != cols)
    {
        printf("Matrix is not square.");
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
        for(j = i + 1; j < rows; j++)
        {
            if(a[i][i] == a[j][j])
            {
                distinct = 0;
            }
        }
    }

    if(distinct == 1)
    {
        printf("Diagonal elements are distinct.");
    }
    else
    {
        printf("Diagonal elements are not distinct.");
    }

    return 0;
}
