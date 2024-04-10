#include<stdio.h>

main(){
	
	int a,b,c;
	
	printf("Enter Your Number A :");
	scanf("%d", &a);
	printf("\nEnter Your Number B :");
	scanf("%d", &b);
	printf("\nEnter Your Number C :");
	scanf("%d", &c);
	
	if(a>b)
    {
        if(a>c){
        	printf("A is Max.");
		}
		else{
			printf("C is Max.");
		}
    }
    else
    {
        if(b>c){
        	printf("B is Max.");
		}
		else{
			printf("C is Max.");
		}
    }
}
