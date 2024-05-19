#include <stdio.h>

int main() 
{
	
    FILE *File, *File1;

    File = fopen("source.txt", "r");
    if (File == NULL) 
	{
        printf("Error opening the file.\n");
    }

    File1 = fopen("destination.txt", "w");
    if (File1 == NULL) 
	{
        printf("Error opening the file1.\n");
        fclose(File);
    }

    fclose(File);
    fclose(File1);

    printf("Content copied successfully from file to file1.\n");
}

