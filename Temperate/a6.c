#include<stdio.h>

main(){
	
	int a, b, c;
	
	printf("Enter your first number :");
	scanf("%d", &a);
	
	printf("\nEnter your second number :");
	scanf("%d", &b);
	
	printf("\nEnter your third number :");
	scanf("%d", &c);
	
	(a<b)
	? ((a<c)
	? printf("The Minimum Value Is : First number.")
	: printf("The Minimum Value Is : Third number."))
	: ((b<c)
	? printf("The Minimum Value Is : Second number.")
	: printf("The Minimum Value Is : Third number."));
}

