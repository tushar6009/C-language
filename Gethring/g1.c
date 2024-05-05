#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int modulus(int a, int b);

int main() 
{
    int choice;
    int num1, num2;
    char exit_choice;

    do {
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the first number: ");
                scanf("%d", &num1);
                printf("Enter the second number: ");
                scanf("%d", &num2);
                printf("Addition of %d and %d is %d\n", num1, num2, add(num1, num2));
                break;
            case 2:
                printf("Enter the first number: ");
                scanf("%d", &num1);
                printf("Enter the second number: ");
                scanf("%d", &num2);
                printf("Subtraction of %d and %d is %d\n", num1, num2, subtract(num1, num2));
                break;
            case 3:
                printf("Enter the first number: ");
                scanf("%d", &num1);
                printf("Enter the second number: ");
                scanf("%d", &num2);
                printf("Multiplication of %d and %d is %d\n", num1, num2, multiply(num1, num2));
                break;
            case 4:
                printf("Enter the first number: ");
                scanf("%d", &num1);
                printf("Enter the second number: ");
                scanf("%d", &num2);
                printf("Division of %d and %d is %d\n", num1, num2, divide(num1, num2));
                break;
            case 5:
                printf("Enter the first number: ");
                scanf("%d", &num1);
                printf("Enter the second number: ");
                scanf("%d", &num2);
                printf("Modulus of %d and %d is %d\n", num1, num2, modulus(num1, num2));
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n\n");
        }

        while ((getchar()) != '\n');

        printf("Press 'q' to quit, any other key to continue: ");
        scanf("%c", &exit_choice);
    } 
	while (exit_choice != 'q' && exit_choice != 'Q');
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int modulus(int a, int b) {
    return a % b;
}

