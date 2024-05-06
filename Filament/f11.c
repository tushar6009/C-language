#include <stdio.h>

void main()
{
    int i, length, rev = 0;
    char name[100];
    
    printf("Enter any string: ");
    gets(name);
    
    length = strlen(name);
    
    for (i = 0; i < length / 2; i++) {
        if (name[i] != name[length - i - 1]) {
            rev = 1;
            break;
        }
    }
    
    if (rev == 0) {
        printf("\n%s Given string is a Palindrome.", name);
    } else {
        printf("\n%s Given string is not a Palindrome.", name);
    }
}

