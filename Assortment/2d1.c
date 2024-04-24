#include<stdio.h>
main(){
	int a, i, arr[a];
	
	printf("Enter Array Size : ");
	scanf("%d",&a);
	
	for(i=0; i < a; i++){
		printf("arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	 for(i=0; i < a; i++){
        if(arr[i] < 0) {
            printf("\n %d ", arr[i]);
        }
    }
}
