#include<stdio.h>

main(){

int rows,column;

printf("Enter the size of rows : ");
scanf("%d",&rows);

printf("Enter the size of column : ");
scanf("%d",&column);

int matrix[rows][column];


printf("\n");



for(int i=0; i<rows; i++){
	for(int j=0; j<column; j++ ){
		
		printf("Enter the value of row %d , column %d : ",i+1,j+1);
		scanf("%d",&matrix[i][j]);
		
	}
}

printf("\nThe value of array : \n");

for(int i=0; i<rows; i++){
	for(int j=0; j<column; j++ ){
		
		printf("%d",matrix[i][j]);
		
	}
	printf("\n");
	}
	
}
