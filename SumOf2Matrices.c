#include<stdio.h>

int main()
{
    int rows, cols;
    int i, j;

    printf("Please enter the number of rows and columns of the matrix: \n");
    scanf("%d%d", &rows, &cols);

    int first[rows][cols], second[rows][cols], sum[rows][cols];

    printf("\nPlease enter the elements of 1st matrix: \n");

    for (i = 0; i < rows; ++i)
        for (j = 0; j < cols; ++j)
        {
            printf("Please enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &first[i][j]);
        }
    
    printf("\nPlease enter the elements of 2nd matrix: \n");

    for (i = 0; i < rows; ++i)
        for (j = 0; j < cols; ++j)
        {
            printf("Please enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &second[i][j]);
        }
    for (i = 0; i < rows; ++i)
        for (j = 0; j < cols; ++j)
            sum[i][j] = first[i][j] + second[i][j];
    
    printf("\n The Sum of two Matrices is: \n");

    for (i = 0; i < rows; ++i)
        for (j = 0; j < cols; ++j)
        {
            printf("%d   ", sum[i][j]);
            if (j == cols - 1)
                printf("\n\n");
        }
    return 0; 
}


