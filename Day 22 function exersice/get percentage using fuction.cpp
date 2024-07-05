#include<stdio.h>

float formula (int total){
	
	float pr = total/5.0;
	
	return pr;
	
}



main(){

int math,sci,com,state,acc;

printf("Enter the marks of entire subjects  :\n");

printf("Maths : ");
scanf("%d",&math);

printf("Science : ");
scanf("%d",&sci);

printf("computer : ");
scanf("%d",&com);

printf("Statestic : ");
scanf("%d",&state);

printf("Account : ");
scanf("%d",&acc);

int total = math + sci + com + state + acc;

float result = formula(total); // call the function

printf("\nThe percentage are : %.2f",result);
}
