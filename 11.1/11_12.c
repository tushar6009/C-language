#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    int *ptr_x, *ptr_y;

    printf("Enter value of X : ");
    scanf("%d", &x);
    printf("Enter value of Y : ");
    scanf("%d", &y);

    ptr_x = &x;
    ptr_y = &y;

    printf("\nBefore swapping :");
    printf("\n\nX : %d\n", x);
    printf("Y : %d\n", y);

    swap(ptr_x, ptr_y);

    printf("\nAfter swapping :");
    printf("\n\nX : %d\n", x);
    printf("Y : %d\n", y);
}

