#include <stdio.h>

int stringLength(char *str) 
{
    int length = 0;
    
    while (*str != '\0') 
	{
        length++;
        str++;
    }
    
    return length;
}

void main() 
{
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("Length of the string: %d\n", stringLength(str));
}

