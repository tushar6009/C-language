#include<stdio.h>
main(){
	
	int i, j;
	char n = 'A';
	
	for(i = 'A'; i <= 'E'; i++){
		for(j = i; j >= 'A'; j--){
			printf("%c ", j);
		}
		printf("\n");
	}
}

//A
//B A
//C B A
//D C B A
//E D C B A
