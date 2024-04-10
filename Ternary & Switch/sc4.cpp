#include<stdio.h>

main(){
	
	int num, a , b;
	
	printf("press 1 to 12");
	
	printf("\nEnter your Choice Number From Above :");
	scanf("%d",&num);
		
	switch(num){
		case 1:
			printf("JANUARY");
			printf("\n31 day in this month");
			break;
		case 2:
			printf("FEBUARY");
			printf("\n28 day in this month");
			break;
		case 3:
			printf("MARCH");
			printf("\n31 day in this month");
			break;
		case 4:
			printf("APRIL");
			printf("\n30 day in this month");	
			break;
		case 5:
			printf("MAY");
			printf("\n31 day in this month");	
			break;
		case 6:
			printf("JUNE");	
			printf("\n30 day in this month");
			break;
		case 7:
			printf("JULY");	
			printf("\n31 day in this month");
			break;
		case 8:
			printf("AUGUST");
			printf("\n31 day in this month");	
			break;
		case 9:
			printf("SEPTEMBER");
			printf("\n30 day in this month");	
			break;
		case 10:
			printf("OCTOMBER");
			printf("\n31 day in this month");	
			break;
		case 11:
			printf("NOVEMBER");
			printf("\n30 day in this month");	
			break;
		case 12:
			printf("DECEMBER");
			printf("\n31 day in this month");	
			break;
			
		default:
			printf("please enter valid choice");
	}	
}
