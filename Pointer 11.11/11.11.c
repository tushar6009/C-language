#include<stdio.h>

void main()
{
	int size;
	printf("Enter the size of arry : ");
	scanf("%d", &size);
	
	int arr[size];
	
	printf("Enter array's elements :\n");
	
	int i;
	
	for(i=0; i<=size; i++)
	{
		printf("a[%d] =",i);
		scanf("%d", &arr[i]);
	}
	for(i=0; i<=size; i++)
	{
		printf("%d * %d = %d\n", arr[i], arr[i], arr[i] * arr[i]);
	}
}
