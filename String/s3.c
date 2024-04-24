#include<stdio.h>
main(){
	
	char str[] = "Hello";
	int length = strlen(str);
	int i, sum=0;
	
	for(i=0; i < length; i++){
		printf("%c = %d\n", str[i], str[i]);
		sum += str[i];
	}
	printf("Sum is : %d", sum);
}
