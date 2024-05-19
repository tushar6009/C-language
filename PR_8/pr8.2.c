#include <stdio.h>

void cube(int *arr, int row, int col);

void main() 
{
    int row, col, i, j;

    printf("Enter Number of Rows: ");
    scanf("%d", &row);
    printf("Enter Number of Columns: ");
    scanf("%d", &col);

    int arr[row][col];

    printf("Enter array elements :\n");
    for (i = 0; i < row; i++) 
	{
        for (j = 0; j < col; j++) 
		{
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    cube(&arr[0][0], row, col);

    printf("Cubes of all elements:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}
void cube(int *arr, int row, int col) 
{
    int i, j;

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) 
		{
            int *ptr = (arr + i * col + j);
            *ptr = (*ptr) * (*ptr);
        }
    }
}
