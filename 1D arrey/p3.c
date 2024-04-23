#include<stdio.h>
main(){
	
	int i, a, arr[i];
	
	printf("Enter Array Size : ");
	scanf("%d", &a);
	
	for(i = 0; i < a; i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	
	printf("The Square Are : ");
	for(i = 0; i < a; i++){
		printf("%d, ",arr[i] * arr[i]);
	}
}
