#include<stdio.h>

main(){
	
	int num, a , b;
	
	printf("press 1 to 7");
	
	printf("\nEnter your Choice Number From Above :");
	scanf("%d",&num);
		
	switch(num){
		case 1:
			printf("MONDAY");
			break;
		case 2:
			printf("TUESDAY");
			break;
		case 3:
			printf("WEDNESDAY");	
			break;
		case 4:
			printf("THURSDAY");	
			break;
		case 5:
			printf("FRIDAY");	
			break;
		case 6:
			printf("SATURDAY");	
			break;
		case 7:
			printf("SUNDAY");	
			break;
		default:
			printf("please enter valid choice");
	}	
}
