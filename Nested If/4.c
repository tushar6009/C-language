#include<stdio.h>

main(){
	
	int a,b,c,d;
	
	printf("Enter Your Number A :");
	scanf("%d", &a);
	printf("\nEnter Your Number B :");
	scanf("%d", &b);
	printf("\nEnter Your Number C :");
	scanf("%d", &c);
	printf("\nEnter Your Number D :");
	scanf("%d", &d);
	
	if(a>b)
    {
        if(a>c){
        	if(a>d){
        		printf("A is Max.");
			}
			else{
				printf("D is Max.");
			}
		}
		else{
				printf("C is Max.");
			}
    }
    else
    {
        if(b>c){
        	if(b>d){
        		printf("B is Max.");
			}
			else{
				printf("D is Max.");
			}
		}
		else{
			if(c>d){
				printf("C is Max.");
			}
			else{
				printf("D is Max.");
			}
		}
    }
}
