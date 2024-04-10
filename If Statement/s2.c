#include<stdio.h>

main(){
	
	int num;
	
	printf("Enter Your Number :");
	scanf("%d", &num);
	
	if(num % 2 == 0)
    {
        printf("This is even number");
    }
    
    else
    {
        printf("This is odd number");
    }
}
