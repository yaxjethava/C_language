#include<stdio.h>

main(){

int money;
printf("Enter your poket size : ");
scanf("%d",&money);

int milk,bread,potato;
char name [56];
int total;
int di;

if (money>=200) {
	
	printf("Welcome\n");
	
	printf("Enter your name : ");
	scanf("%s",&name);
	
	printf("Enter the price of entier product\n");
	
	printf("Milk : ");
	scanf("%d",&milk);

    printf("Bread : ");
	scanf("%d",&bread);
	
	printf("Potato : ");
	scanf("%d",&potato);
	 	
	 	
	total=milk+bread+potato; 
	
	printf("%s ,Your grand total : %d\n",name,total);
	
	
	if(total<=money){
		
		printf("You can buy these products\n");
		printf("Thank you for shopping");
		
		
	} else{
		di=total-money;
		printf("Sorry, You have not enough money.so, please recharge  %d for shopping",di);
		
	}
	 	
} 


else{
	
	printf("Good by");
	
}

}
