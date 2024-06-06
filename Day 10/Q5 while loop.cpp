#include<stdio.h>

main(){

//for get a leap years 

int a,b;
printf("Enter the first year : ");
scanf("%d",&a);

printf("Enter the last year : ");
scanf("%d",&b);

printf("\nLeap years between them : \n");
while(a<=b){
	
	if(a%4==0){
		
		printf("%d\n",a);
		
	}
	a++;
}

}
