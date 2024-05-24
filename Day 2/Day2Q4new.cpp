#include<stdio.h>

main(){
	
	int a,b;
	
	printf("Enter a value of a and b to get a-b square");
	
	scanf("%d%d",&a,&b);
	
	int ab_sq=a*a-2*a*b+b*b;
	
	printf("The value of a-b square is %d",ab_sq);
	
}