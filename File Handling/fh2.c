#include <stdio.h>

int main() 
{
    FILE *file;
    int i;

    file = fopen("divisible_numbers.txt", "w");
    if (file == NULL) 
	{
        printf("Error opening the file.\n");
    }

    for (i = 1; i <= 50; i++) 
	{
        if (i % 3 == 0 && i % 5 == 0) 
		{
            fprintf(file, "%d\n", i);
        }
    }

    fclose(file);

    printf("Numbers divisible by both 3 and 5 between 1 and 50 are written to divisible_numbers.txt.\n");
}

