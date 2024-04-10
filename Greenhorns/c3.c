#include<stdio.h>

main(){
	
	int a, b, c;
	
	printf("Enter your First Angle :");
	scanf("%d", &a);
	
	printf("Enter your Second Angle :");
	scanf("%d", &b);
	
	c = 180 - (a + b);
	
	printf("Here Is Your Third Angle : %d", c);
}
