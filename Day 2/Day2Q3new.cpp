#include<stdio.h>

main(){
	
	int a,b;
	
	printf("Enter a value of a and b to get a (a-b)sqaure\n");
	
	scanf("%d%d",&a,&b);
	
	float ab_sq=a*a-2*a*b+b*b;
	
	printf("The value of a and b square is %f",ab_sq);
	
}