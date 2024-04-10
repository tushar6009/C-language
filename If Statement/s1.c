#include<stdio.h>

main(){
	
	int mark;
	
	printf("Enter Your Marks :");
	scanf("%d", &mark);
	
	if(mark<0)
    {
        printf("Please Enter Valid Marks");
    }
    
    else if(mark<35)
    {
        printf("Your Are Fail In This Exam");
    }
    
    else if(mark>=35 & mark<60)
    {
        printf("Grade D");
    }
    else if(mark>=60 & mark<70)
    {
        printf("Grade B");
    }
    else if(mark>=70 & mark<80)
    {
        printf("Grade B+");
    }
    else if(mark>=80 & mark<90)
    {
        printf("Grade A");
    }
    else
    {
        printf("Grade A+");
    }
}
