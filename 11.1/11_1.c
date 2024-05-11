#include <stdio.h>

int main() 
{
    int a;
    int *ptr;
    
    printf("Enter the any number : ");
    scanf("%d", &a);

    ptr = &a;
    
    printf("\nA\t : %d\n",a);
	printf("PTR\t : %d\n",*ptr);
	
	printf("\nAddress of A\t : %u\n",&a);
	printf("PTR Store Address\t : %u\n",ptr);
}

