#include<stdio.h>

int mystrlen(char str[100]);

main()
{
	char str[100];
	int i, len;

	printf("Enter any string :");
	gets(str);

	len = mystrlen(str);
	printf("Length is: %d", len);
}


int mystrlen(char str[100])
{
	int i, len = 0;

	for(i = 0; str[i] != '\0'; i++) len++;
	
	return(len);
}
