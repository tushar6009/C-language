#include<stdio.h>

main(){
	
	int n=1, m;
	
	printf("Enter Your Number :");
	scanf("%d", &m);
	
	while(m >= n){
		if(m % 2 == 1)
			printf("%d", m);
			m--;
			printf("\n");
		
	}
}
