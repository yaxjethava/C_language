#include<stdio.h>

main(){

int n;  // for take a size of array 
printf("Enter array size : ");
scanf("%d",&n);

int arr[n];  
int sum; // for make a sum of array value

//enter a value in array 
 
printf("\nEnter array elements : \n");
for(int i=0; i<n; i++){
	
	printf("array [%d] = ",i);
	scanf("%d",&arr[i]);
	
	sum+=arr[i];
}

// for make a average
float ave = sum/n; 

printf("\nAverage of an array : %.2f",ave);
}
