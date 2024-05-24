#include<stdio.h>

main(){
	
	int a,b;
	
	printf("Enter the value of a and b to get (a+b)(a-b)\n");
	
	scanf("%d%d",&a,&b);
	
	int value=a*a-b*b;
	
	printf("The value of (a+b)(a-b) is %d",value);
	
}