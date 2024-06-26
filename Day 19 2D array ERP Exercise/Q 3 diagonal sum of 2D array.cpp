#include<stdio.h>

main(){

int n; // for make a array size

printf("Enter the array's row & column size : ");
scanf("%d",&n);


int arr[n][n];

printf("\nEnter array's Elements : \n");
for(int i=0; i<n; i++){
	for(int j=0; j<n; j++){
		
		printf("array [%d][%d] : ",i,j);
		scanf("%d",&arr[i][j]);
		
	}
}
int sum;

for(int i= 0; i<n; i++){
	for(int j=0; j<n; j++){
		
		if(i==j){
			
			sum+=arr[i][j];
			
		}
	
	}
	}
printf("The sum of diagonal of an Array : %d",sum);
}
