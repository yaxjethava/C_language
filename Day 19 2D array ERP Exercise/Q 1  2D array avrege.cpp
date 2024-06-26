#include<stdio.h>

main(){

int row,col,sum;

printf("Enter the array's row size : ");
scanf("%d",&row);

printf("Enter the array's column size : ");
scanf("%d",&col);

int arr[row][col];

for(int i=0; i<row; i++){
	for(int j=0; j<col; j++){
		
		printf("array [%d][%d] : ",i,j);
		scanf("%d",&arr[i][j]);
		
		sum+=arr[i][j];
	}
}
float avr = sum/(row*col);
printf("Average of an Array : %.2f",avr);
}
