#include<stdio.h>

int guniya(int x,int y){

int sum = x*y;

return sum;
}


main(){
	
	int x,y;
	
	printf("Enter x value : ");
	scanf("%d",&x);
	
	printf("Enter y value : ");
	scanf("%d",&y);
	
	int result = guniya(x,y);
	
	printf("Your result is : %d",result);
}