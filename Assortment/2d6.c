#include <stdio.h>
main() {
    int row, col, i, j;

    printf("Enter the array's raw size: ");
    scanf("%d", &row);
    printf("Enter the array's column size: ");
    scanf("%d", &col);

    int arr[row][col], arr1[row][col], arr2[row][col];

    printf("\nEnter array A's elements:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nEnter array B's elements:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\nArray C is:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            arr2[i][j] = arr[i][j] + arr1[i][j];
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }

}
