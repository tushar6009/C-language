#include<stdio.h>
main(){
	
	int i, j, k=2;
	char n = 'A';
	
	for(i = 0; i <= 4; i++){
		for(j = 0; j <= i; j++){
			if(i %2 == 0){
				if(j %2 == 0){
				printf("%c ", n++);
				}
				else{
					printf("%d ", k++);
				}
			}
			else{
				if(j %2 == 0){
				printf("%d ", k++);
				}
				else{
					printf("%c ", n++);
				}
			}
		}
		printf("\n");
	}
}

//A
//2   B
//c   3   D
//4   E   5   F
//G   6   H   7   I
