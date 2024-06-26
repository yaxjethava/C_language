#include<stdio.h>

main(){

int row,col ;// take size of arrays A and B;

printf("Enter the array's row size : ");
scanf("%d",&row);

printf("Enter the array's column size : ");
scanf("%d",&col);

int A[row][col],B[row][col];



printf("\nEnter array A's elements : \n"); // enter the value of array A

for(int i=0; i<row; i++){
	for(int j=0; j<col; j++){
		
		printf("A [%d][%d] = ",i,j);
		scanf("%d",&A[i][j]);
		
	}	
}

printf("\nEnter array B's elements :\n"); // enter the value of array B

for(int i=0; i<row; i++){
	for(int j=0; j<col; j++){
		
		printf("B [%d][%d] = ",i,j);
		scanf("%d",&B[i][j]);
		
	}	
}

printf("\n Array C is :\n"); // sum of Array A and B

for(int i=0; i<row; i++){
	for(int j=0; j<col; j++){
	
	int C = A[i][j]+B[i][j];	
	
	printf("%d ",C);	
	}
	printf("\n");	
}
}
