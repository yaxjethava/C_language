#include<stdio.h>
main(){
	
	float F;
	printf("Enter the temperature of fahrenheit to convert into celsius\n");
	
	scanf("%f",&F);
	
	float C=(F-32)*5/9;
	
	printf("The temperature is %.1f celsius",C);
	
}