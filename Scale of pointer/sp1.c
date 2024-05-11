#include<stdio.h>

void main()
{
	int a[5] = {10,11,12,13,14};
	int *ptr;
	
	ptr = &a;
	
	int i;
	
	for(i=0; i <= 4; i++){
		printf("%d ", *(ptr+i));
	}
}
