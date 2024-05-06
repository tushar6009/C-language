#include<stdio.h>

main()
{
	int a;
	char ch;
	
	printf("\nInteger Bytes\t: %lu\n", sizeof(a));
	printf("Float Bytes\t: %d\n", sizeof(a));
	printf("Character Bytes\t: %lu\n", sizeof(ch));
	printf("Double Bytes\t: %d\n", sizeof(double));
	printf("Long Integer Bytes\t: %d\n", sizeof(long));
	printf("Long Long Integer Bytes\t: %d\n", sizeof(long long));
	
	int b[8];
	printf("\n\nArray Bytes\t: %d\n", sizeof(b));
	
	int size = sizeof(b) / sizeof(b[0]);
	printf("\nSize of Array Bytes\t: %zu\n", size);
	
	char name[20] = "Tushar";
	printf("\nString Bytes\t: %d\n", sizeof(name));
	
	
	
}
