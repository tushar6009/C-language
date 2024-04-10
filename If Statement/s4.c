#include<stdio.h>

main(){
	
	int age;
	
	printf("Enter Your age :");
	scanf("%d", &age);
	
	if(age < 0)
    {
        printf("Enter Your Valid Age");
    }
    
    else if(age <= 17)
    {
        printf("You Are Not Eligible For Voting");
    }
    
    else
    {
        printf("You Are Eligible For Voting");
    }
}
