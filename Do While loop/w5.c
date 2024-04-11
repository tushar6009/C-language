#include<stdio.h>

main(){
	
	int a, b;
	
	printf("Enter Your Min. year :");
	scanf("%d", &a);
	printf("Enter Your Max. year :");
	scanf("%d", &b);
	
	do{
		if(a %4 == 0){
			printf("%d", a);
			printf("\n");
		}
		a++;	
	}while(a <= b);
}
