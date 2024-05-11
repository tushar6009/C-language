#include <stdio.h>

int main() 
{
    int a[5] = {1, 2, 3, 4, 5},i;
    int *ptr[5];

    for (i = 0; i < 5; i++) 
	{
        ptr[i] = &a[i];
    }

    for (i = 0; i < 5; i++) 
	{
        printf("Address of a[%d]: %p\n\n", i, &a[i]);
        printf("Address of PTR[%d]: %p\n\n", i, &a[i]);
        
        printf("\nAddress of a[%d]: %u\n\n", i, &a[i]);
        printf("Address of PTR[%d]: %u\n\n", i, &a[i]);
    }
}

