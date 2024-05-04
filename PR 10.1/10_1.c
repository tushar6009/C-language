#include<stdio.h>

int cube(int n);

main()
{
	int n;
	
	printf("Enter any number :");
	scanf("%d", &n);
	
	printf("Cube is %d", cube(n));
}

int cube(n)
{
	return n*n*n;
}
