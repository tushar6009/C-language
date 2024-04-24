#include <stdio.h>

int main() {
    int row, col, i, j;

    printf("Enter the array's row size: ");
    scanf("%d", &row);

    printf("Enter the array's column size: ");
    scanf("%d", &col);

    int arr[row][col];

    printf("\nEnter arr's elements:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nEntered array:\n");
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int row1, row_sum = 0;
    
    printf("\nEnter row number: ");
    scanf("%d", &row1);
    
    printf("Elements of row %d: ", row1);

    for (j = 0; j < col; j++) {
        printf("%d ", arr[row1][j]);
        row_sum += arr[row1][j];
    }
    printf("\nThe sum of row %d: %d\n", row1, row_sum);

    int col1, col_sum = 0;
    
    printf("\nEnter column number: ");
    scanf("%d", &col1);
    
    printf("Elements of column %d: ", col1);

    for (i = 0; i < row; i++) {
        printf("%d ", arr[i][col1]);
        col_sum += arr[i][col1];
    }
    printf("\nThe sum of column %d: %d\n", col1, col_sum);
}

