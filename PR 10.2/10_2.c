#include<stdio.h>

int inputInt();
void arrayInput(int size, int arr[]);
int outputSum(int size, int arr[]);

main()
{
	int size;
	
    printf("Enter the size of the array: ");
    size = inputInt();
    
    int arr[size];
    arrayInput(size, arr);
    
    int sum = outputSum(size, arr);
    printf("Sum of array elements: %d\n", sum);
}

int inputInt()
{
	int n;
	scanf("%d", &n);
	
	return n;
}
void arrayInput(int size, int arr[])
{
	int i;
	
	for(i=0; i<size; i++)
	{
		printf("Enter Element %d :", i+1);
		arr[i] = inputInt();
	}
}
int outputSum(int size, int arr[]) 
{
    int sum = 0,i;
    for (i = 0; i < size; i++) sum += arr[i];
    
    return sum;
}
