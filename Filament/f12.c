#include<stdio.h>

int main()
{
    int i, j, length, count;
    char str[100];
    
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    
    length = strlen(str);
    
    printf("Frequency of each letter:\n");
    
    for (i = 0; i < length; i++) {
        count = 1;
        if (str[i] != '\0' && str[i] != '\n') {
            for (j = i + 1; j < length; j++) {
                if (str[i] == str[j]) {
                    count++;
                    str[j] = '\0';
                }
            }
            printf("%c = %d\n", str[i], count);
        }
    }
}

