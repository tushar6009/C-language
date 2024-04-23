#include<stdio.h>
 main(){
 	
	int a, b, i, arr[i];
	
	printf("Enter the First Year : ");
	scanf("%d",&a);
	
	printf("Enter the Last Year : ");
	scanf("%d",&b);
	
	for(arr[i] = a; arr[i] <= b; arr[i]++){
		if(arr[i] % 4== 0){
			printf("%d,",arr[i]);
		}
	}
}
