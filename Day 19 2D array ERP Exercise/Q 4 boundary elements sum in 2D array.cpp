#include<stdio.h>

main(){

int n = 5, sum;
int arr[n][n];

printf("Enter array's Element : \n");

for(int i=0; i<n; i++){
	for(int j=0; j<n; j++){
	
	printf("Array [%d][%d] = ",i,j);
	scanf("%d",&arr[i][j]);	
		
	}
}

for(int i=0; i<n; i++){
	for(int j=0; j<n; j++){
		
		if(i==0 ||i==4 || j==0 || j==4){
			
			sum += arr[i][j];
			
		}
		
	}
}

printf("The sum of boundary element of an Array : %d",sum);

}
