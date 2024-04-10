#include<stdio.h>

main(){
	
	int a, b, c, d, e, hra, da, ta;
	
	printf("Enter Your Base Salary :");
	scanf("%d", &a);
	
	printf("Enter Your HRA :");
	scanf("%d", &b);
	
	printf("Enter Your DA :");
	scanf("%d", &c);
	
	printf("Enter Your TA :");
	scanf("%d", &d);
	
	hra = b * 100 / a;
	da = c * 100 / a;
	ta = d * 100 / a;
	
	e = a + hra + da + ta ;
	
	printf("Here is Your Gross Amount = %d", e);
		
}
