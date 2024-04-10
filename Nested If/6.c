#include<stdio.h>

main(){
	
	int a,b,c,d,e,f;
	
	printf("Enter Your Number A :");
	scanf("%d", &a);
	printf("\nEnter Your Number B :");
	scanf("%d", &b);
	printf("\nEnter Your Number C :");
	scanf("%d", &c);
	printf("\nEnter Your Number D :");
	scanf("%d", &d);
	printf("\nEnter Your Number E :");
	scanf("%d", &e);
	printf("\nEnter Your Number F :");
	scanf("%d", &f);
	
	if(a>b)
    {
        if(a>c){
        	if(a>d){
        		if(a>e){
        			printf("A is Max.");
				}
				else{
					if(a>f){
						printf("A is Max.");
					}
					else{
						printf("F is Max.");
					}
				}
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
        		if(b>e){
        			printf("B is Max.");
				}
				else{
					if(b>f){
						printf("B is Max.");
					}
					else{
						printf("F is Max.");
					}
				}
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
					if(c>e){
						printf("D is Max.");
					}
					else{
						if(c>f){
							printf("C is Max.");
						}
						else{
							if(d>e){
								printf("D is Max.");
							}
							else{
								if(d>f){
									printf("D is Max.");
								}
								else{
									if(e>f){
										printf("E is Max.");
									}
									else{
										printf("F is Max.");
									}
								}
							}
						}
					}
				}
			}
    }
}
