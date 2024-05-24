#include<stdio.h>

main(){
	
int A,B,C;
float area;

printf("Enter the value of A,B and C for get the area of Triangal\n");
scanf("%d%d%d",&A,&B,&C);

area=(A*B*C)/3*100;

printf("The area of triangal is %.3f",area);
	
}