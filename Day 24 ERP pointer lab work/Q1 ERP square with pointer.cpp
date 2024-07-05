#include<stdio.h>

main(){

int num,s;

printf("Enter the array's size : ");
scanf("%d",&num);

int arr[num];

printf("\n\nEnter array's elements : \n");
for(int i=0; i<num; i++){
	
	printf("Array[%d] = ",i);
	scanf("%d",&arr[i]);

}
printf("\n\nSquare of each element : ");

for(int i=0; i<num; i++){
	
	
 int *ps = &arr[i];
 printf("%d,",*ps * *ps);
	
}
}
