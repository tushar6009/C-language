#include<stdio.h>

main(){
	
	int n;
	
	printf("Enter Your Number :");
	scanf("%d", &n);
	
	do{
		printf("%d", n);
		n--;
		printf("\n");
	}while(1 <= n);
	
}
