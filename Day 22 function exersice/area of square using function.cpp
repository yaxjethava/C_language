#include<stdio.h>

int area(int x){
	
	int formula = x*x;
	return formula;
}

main(){

int n;

printf("Enter the value for get squre area : ");
scanf("%d",&n);

int call= area(n);

printf("The area of square %d * %d : %d",n,n,call);
}
