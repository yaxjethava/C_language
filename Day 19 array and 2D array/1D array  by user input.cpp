#include<stdio.h>

main(){

int n;

printf("Enter the elements of array size : ");
scanf("%d",&n);

int array[n];

for(int i=0; i<n; i++){
	
	printf("Enter the value of array %d : ",i+1);
	scanf("%d",&array[i]);
	
}

for(int i=0; i<n; i++){
	
	printf("%d ",array[i]);
	
}
}
