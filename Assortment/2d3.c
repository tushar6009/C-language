#include<stdio.h>
main(){
	int row, col,i, j;
	
	printf("Enter Number of Row : ");
	scanf("%d",&row);
	printf("Enter Number of Column : ");
	scanf("%d",&col);
	
	int arr[row][col];
	
	for(i=0; i < row; i++){
		for(j=0; j < col; j++){
			printf("arr[%d][%d]", i, j);
			scanf("%d", &arr[i][j]);	
		}
	}
	for(i=0; i < row; i++){
		for(j=0; j < col; j++){
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
}


