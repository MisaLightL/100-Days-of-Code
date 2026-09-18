#include <stdio.h>
// Q79 (2D Arrays)
// Perform diagonal traversal of a matrix.
int main()
//Answer:

{
    int a[10][10];
    int rows, cols;
    int i, j, k;

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

    printf("Diagonal traversal:\n");

    for(k = 0; k <= rows + cols - 2; k++)
    {
        for(i = 0; i < rows; i++)
        {
            j = k - i;

            if(j >= 0 && j < cols)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}
