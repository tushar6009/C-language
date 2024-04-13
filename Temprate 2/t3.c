#include <stdio.h>
int main()
{
    int num, sum, fd, ld;
    
    printf("Enter Your number : ");
    scanf("%d", &num);
    
    ld = num % 10;
    
    while(num >= 10)
    {
        num = num / 10;
    }
    fd = num;
    
    sum = fd + ld;
    
    printf("Sum of first and last digit = %d", sum);
}
