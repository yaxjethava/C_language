#include<stdio.h>
int area(int x, int y){
	
	float c = 0.5*x*y;
	
	return c;
	
}

main(){

int b,h;

printf("Enter area of triangle B : ");
scanf("%d",&b);

printf("Enter area of triangle H : ");
scanf("%d",&h);

float calculation = area(b,h);

printf("The area of triangle is : %.2f",calculation);
}
