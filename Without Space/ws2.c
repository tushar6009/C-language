#include<stdio.h>
main(){
	
	int i, j;
	
	for(i = 5; i >= 1; i--){ //raws
		for(j = i; j <= 5; j++){ //column
			printf("%d ", j);
		}
		printf("\n");
	}
}

//5
//4 5
//3 4 5
//2 3 4 5
//1 2 3 4 5
