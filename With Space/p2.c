#include<stdio.h>
main(){
	int i, j, s;
	
	for(i=1; i<=5; i++){
		for(s=4; s>=i; s--){
			printf("  ");
		}
		for(j=1; j<=i; j++){
			printf("%d ", j);
		}
		printf("\n");
	}
	for(i=4; i>=1; i--){
		for(s=4; s>=i; s--){
			printf("  ");
		}
		for(j=1; j<=i; j++){
			printf("%d ", j);
		}
		printf("\n");
	}
	
}


//        1
//      1 2
//    1 2 3
//  1 2 3 4
//1 2 3 4 5
//  1 2 3 4
//    1 2 3
//      1 2
//        1
