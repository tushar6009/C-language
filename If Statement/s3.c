#include<stdio.h>

main(){
	
	int num;
	
	printf("Enter Your Number :");
	scanf("%d", &num);
	
	if(num < 0)
    {
        printf("This is Negative Number");
    }
    
    else if(num>0)
    {
        printf("This is Positive Number");
    }
    
    else
    {
        printf("This is Zero");
    }
}
