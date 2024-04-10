#include <stdio.h>
main(){
	int num;
	
	printf("Enter Your Number :");
	scanf("%d", &num);
	
	(num % 2 == 0)
	? printf("Your Number is Even.", num)
	: printf("Your Number is odd.", num);
	
}

