#include<stdio.h>

main(){
	
	int num, a , b;
	
	printf("press 1 for sum, press 2 for minus, press 3 for multiply, press 4 for divide");
	
	printf("\nEnter your Choice Number From Above :");
	scanf("%d",&num);
	
	printf("Enter Your First Number :");
	scanf("%d",&a);
	
	printf("Enter Your Second Number :");
	scanf("%d",&b);
		
	switch(num){
		case 1:
			printf("%d + %d = %d", a, b, a+b);
			break;
		case 2:
			printf("%d - %d = %d", a, b, a-b);
			break;
		case 3:
			printf("%d * %d = %d", a, b, a*b);	
			break;
		case 4:
			printf("%d / %d = %d", a, b, a/b);	
			break;
		default:
			printf("please enter valid choice");
	}	
}
