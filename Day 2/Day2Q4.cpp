#include<stdio.h>

main(){
	
	float p,r,n;
	
	printf("Enter a value of P,R and N\n");
	
	scanf("%f%f%f",&p,&r,&n);
	
	float interest=p*r*n/100;
	
	printf("The interest of PRN is %f",interest);
	
}