#include<stdio.h>

main(){
	
	int a, b, unit;
	float c;
	
	printf("Enter Your Units :");
	scanf("%d", &unit);
	
	if(unit <= 50)
    {
        a = unit * 0.50;
    }
    else if(unit <= 100)
    {
        a = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 100)
    {
        a = 100 + ((unit-150) * 1.20);
    }
    else {
        a = 220 + ((unit-250) * 1.50);
    }
	b = a * 0.20;
	c = a + b;
    printf("Electricity Bill = Rs. %f",c);
		
}
