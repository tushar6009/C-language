#include<stdio.h>

main(){
	
	int a, b=20, c, ans;
	
	printf("Enter Your Number :");
	scanf("%d", &a);
	
	while(a <= b){
		if(a %2 == 0){
			printf("%d", a);
			ans = ans + a;
			printf("\n");
		}
		a++;
	}
	printf("\n Sum of Even Number %d", ans);
	
	c = ans *ans;
	
	printf("\n Cube of even number %d", c);
}
