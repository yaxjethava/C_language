#include<stdio.h>
main(){
	
	int price=250;
	float rate=18.5;
	int month=6;
	
	float interest = price*rate*month/100;
	
	printf("%.2f",interest);
	
}