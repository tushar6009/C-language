#include<stdio.h>
main(){
	char n = 'a';
	
	do{
		printf("%c ,", n);
		n += 4;
	}while (n <= 'z' && n >= 'a');
	printf("\n");
}
