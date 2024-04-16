#include<stdio.h>
main(){
	
	int i, j, k = 1;
	char n = 'A';
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(j %2 == 0){
				printf("%d ", k++);
			}
			else{
				printf("%c ", n++);
			}
		}
		printf("\n");
	}
}

//1   A   2   B   3
//4   C   5   D   6
//7   E   8   F   9
//10   G   11   H   12
//13   I   14   J   15
