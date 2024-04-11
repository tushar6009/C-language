#include<stdio.h>

main(){
	
	int m;
	
	printf("Enter Your Number :");
	scanf("%d", &m);
	
	do{
		if(m % 2 == 1)
			printf("%d", m);
			m--;
			printf("\n");
	}while(m >= 1);
}
