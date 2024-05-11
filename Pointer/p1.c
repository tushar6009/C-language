#include<stdio.h>

void main()
{
	int a = 20;
	int *ptr;
	
	ptr = &a;
	
	printf("A\t : %d\n",a);
	printf("PTR\t : %d\n",*ptr);
	
	a = 66;
	
	printf("\n\nA\t : %d\n",a);
	printf("PTR\t : %d\n",*ptr);
	
	a = 95;
	
	printf("\n\nA\t : %d\n",a);
	printf("PTR\t : %d\n",*ptr);
	
	
	printf("\n\nA\t : %u\n",&a);
	printf("PTR\t : %u\n",ptr);
	
	printf("\n\nA\t : %x\n",&a);
	printf("PTR\t : %x\n",ptr);
	
	printf("\n\nA\t : %p\n",&a);
	printf("PTR\t : %p\n",ptr);
	
}
