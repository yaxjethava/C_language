#include<stdio.h>

main(){
	
	float a,b,c;
	
	printf("Enter a value of a,b and c to get average\n");
	scanf("%f%f%f",&a,&b,&c);
	
	float cal=(a+b+c)/3;
	
	printf("The average of %.f,%.f and %.f is %.2f",a,b,c,cal);
	
}