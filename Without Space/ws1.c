#include<stdio.h>
main(){
	
	int i, j;
	
	for(i = 1; i <= 5; i++){ //raws
		for(j = i; j >= 1; j--){ //column
			printf("%d ", j);
		}
		printf("\n");
	}
}

//1
//2 1
//3 2 1
//4 3 2 1
//5 4 3 2 1 
