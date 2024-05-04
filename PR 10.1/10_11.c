#include<stdio.h>

int division(int n);

main()
{
	int n;
	
	printf("Enter any number :");
	scanf("%d", &n);
	
	division(n);
}

int division(int n)
{
	if((n % 3 == 0) && (n % 5 == 0))
	{
		printf("The given number is divisible by both 3 & 5.");
	}
	else
	{
		printf("The given number is not divisible by both 3 & 5.");	
	}
}
