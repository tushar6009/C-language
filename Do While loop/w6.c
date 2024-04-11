#include<stdio.h>

main(){
	
	int a, b=20, c, d;
	
	printf("Enter Your Number :");
	scanf("%d", &a);
	
	do{
		if(a %2 == 0){
			printf("%d", a);
			printf("\n");
			c = c + a;
		}
		a++;
	}while(a <= b);
	printf("Sum of even number : %d", c);
	d = c * c;
	printf("\nCube of Even Number :%d", d);
}
