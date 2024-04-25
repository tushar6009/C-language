#include<stdio.h>
main(){
	
	int i, length, upr = 0, lwr = 0, num = 0, spe = 0;
	char pwd[10];
	
	printf("Enter Your Password :");
	gets(pwd);
	
	length = strlen(pwd);
	
	printf("%d", length);
	
	for(i = 0; i < length; i++){
		if(pwd[i] >= 65 && pwd[i] <= 90)
		upr++;
		if(pwd[i] >= 97 && pwd[i] <= 122)
		lwr++;
		if(pwd[i] >= 48 && pwd[i] <= 57)
		num++;
		if(pwd[i] == '@' || pwd[i] == '#' || pwd[i] == '$' || pwd[i] == '&')
		spe++;
	}
	
	if(upr > 0 && lwr > 0 && spe > 0 && num > 0){
		printf("\nYour Password is Strong.");
	}
	else{
		printf("\nYour Password is Weak.");
	}
}
