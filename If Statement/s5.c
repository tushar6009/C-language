#include<stdio.h>

main(){
	
	int age;
	
	printf("Enter Your Marks :");
	scanf("%d", &age);
	
	if(age < 0)
    {
        printf("Please Enter Valid Age");
    }
    
    else if(age <= 12)
    {
        printf("Your Are Child.");
    }
    
    else if(age >= 13 & age <= 19)
    {
        printf("Your Are Teenager.");
    }
    
    else if(age >= 20 & age <= 64)
    {
        printf("Your Are Adult.");
    }
    
    else
    {
        printf("You Are Senior.");
    }
}
