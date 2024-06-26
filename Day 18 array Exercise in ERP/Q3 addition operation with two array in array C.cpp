#include<stdio.h>

main(){

int n; // for take the array size
printf("Enter array size : ");
scanf("%d",&n);

// Make a two arrray A and B ,take their value one by one
int A[n],B[n];
int sum[n];
printf("\nEnter array A's elements : \n");

for(int i=0; i<n; i++){
	
	printf("A[%d] = ",i);
	scanf("%d",&A[i]);	
}

printf("\nEnter array B's elements : \n");

for(int i=0; i<n; i++){	

	printf("B[%d] = ",i);
	scanf("%d",&B[i]);	
}

printf("Array C is : "); // make the sum of the two array in C array
for(int i=0; i<n; i++){
	
	sum[i] = A[i]+B[i];
	printf("%d,",sum[i]);
}
}
