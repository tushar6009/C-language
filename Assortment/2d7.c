#include <stdio.h>

int main() {
    int i, j, row, col;

    printf("Enter the size of Row & Column : ");
    scanf("%d %d", &row, &col);

    int arr[row][col];

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("arr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int sum = 0;
    
    for (i = 0; i < row; i++) {
        sum += arr[i][col - i - 1];
    }
    printf("The sum of diagonal elements of an Array : %d\n", sum);
}

