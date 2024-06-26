#include<stdio.h>

main(){

int n;
printf("Enter Array size : ");
scanf("%d",&n);

int array[n];

//for give value of array's elements

printf("\nEnter array elements : \n");
for(int i=0; i<n; i++){
	
	printf("Array [%d] = ",i);
	scanf("%d",&array[i]);
	
}

// for get a lenght of array

int len = sizeof(array)/sizeof(array[0]);

printf("\nLenght of Array : %d",len);
}
