#include <stdio.h>

void main() 
{
    FILE *even_file, *odd_file;
    int i;

    even_file = fopen("even_file.txt", "w");
    odd_file = fopen("odd_file.txt", "w");

    if (odd_file == NULL || even_file == NULL) {
        printf("Error opening file...");
        return;
    }

    for (i = 50; i <= 70; i++) {
        if (i % 2 == 0) {
            fprintf(even_file, "%d ", i);
        } else {
            fprintf(odd_file, "%d ", i);
        }
    }

    fclose(even_file);
    fclose(odd_file);
    
    printf("\nEven number printed in even_file...\n");
    printf("Odd number printed in odd_file...\n");
}

