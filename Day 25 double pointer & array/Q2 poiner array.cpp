#include<stdio.h>

main(){

int n;

printf("Enetr array size : ");
scanf("%d",&n);

int arr[n];
int *parr[n];

printf("Enter array elements : \n");

for(int i=0; i<n; i++){
	
	printf("Array [%d] : ",i);
	scanf("%d",&arr[i]);
}

printf("\n");
for(int i=0; i<n; i++){
	
	parr[i]=&arr[i];
	printf("array[%d] ==> %d\n",i,*parr[i]);
	
}

printf("\n");
for(int i=0; i<n; i++){
	
	printf("Sqaure of %d ==> %d\n",i+1,*parr[i] * *parr[i]);
	
}
}
