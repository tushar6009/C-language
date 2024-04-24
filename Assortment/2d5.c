#include<stdio.h>
main(){
	int row, col, i, j, sum=0;
	
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
	
    float avg;
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            sum += arr[i][j];
        }
    }
    avg = (float)sum / (row * col);
    printf("Average of an Array : %.2f\n", avg);
}


