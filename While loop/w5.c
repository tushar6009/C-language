#include<stdio.h>

main(){
	
	int a, b;
	
	printf("Enter Your year :");
	scanf("%d", &a);
	printf("Enter Your year :");
	scanf("%d", &b);
	
	while(a <= b){
		if(a %4 == 0){
			printf("%d", a);
			printf("\n");
		}
		a++;	
	}
}
