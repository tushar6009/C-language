#include<stdio.h>

main(){
	
	int num, a , b;
	
	printf("press 1 to 12");
	
	printf("\nEnter your Choice Number From Above :");
	scanf("%d",&num);
		
	switch(num){
		case 1:
			printf("JANUARY");
			break;
		case 2:
			printf("FEBUARY");
			break;
		case 3:
			printf("MARCH");	
			break;
		case 4:
			printf("APRIL");	
			break;
		case 5:
			printf("MAY");	
			break;
		case 6:
			printf("JUNE");	
			break;
		case 7:
			printf("JULY");	
			break;
		case 8:
			printf("AUGUST");	
			break;
		case 9:
			printf("SEPTEMBER");	
			break;
		case 10:
			printf("OCTOMBER");	
			break;
		case 11:
			printf("NOVEMBER");	
			break;
		case 12:
			printf("DECEMBER");	
			break;
			
		default:
			printf("please enter valid choice");
	}	
}
