#include<stdio.h>
main(){
	
	int a, b, c, d, e;
	
	printf("Enter Your Number A :");
	scanf("%d", &a);
	printf("Enter Your Number B :");
	scanf("%d", &b);
	printf("Enter Your Number C :");
	scanf("%d", &c);
	printf("Enter Your Number D :");
	scanf("%d", &d);
	printf("Enter Your Number E :");
	scanf("%d", &e);
	
	(a > b)
	? ((a>c) 
	? ((a>d)
	? ((a>e) 
	? printf("A is max") 
	: printf("E is Max"))
	: printf("D is max")) 
	: printf("C is max"))
	: (
	 ((b>c) 
	? ((b>d)
	? ((b>e) 
	? ((c>d) 
	? ((c>e) 
	? ((d>e)
	? printf("D is Max")
	: printf("E is Max"))
	: printf("E is Max")) 
	: printf("D is Max")) 
	: printf("E is Max"))
	: printf("D is max")) 
	: printf("C is max"))
	);
	
	
	
	
	
	
	
}
