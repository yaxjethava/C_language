#include<stdio.h>

main(){

char name[128];
char* products[200]={"milk","bread","tomato","chip"};
int money,total;
int product[4];
int dif;
int add_money=0;

printf("Enter your poket size : ");
scanf("%d",&money);

	if(money>=500){
	
	printf("Welcome\n");
	printf("Enter your name : ");
	scanf("%s",&name);
	
	printf("Enter the price of entire products \n");
	for(int i=0; i<=3; i++){
		
		
		printf("%s : ",products[i]);
		scanf("%d",&product[i]);
	
		total += product[i];	
		
	}
	
	
	printf("Your grand total are %d\n",total);
	dif=total-money;
	
	if(total<=money){
		
		printf("You can purcahse your products sucssesfully");
	
	}else{
		
		printf("You have not enough balance ,so first recharge %d for shopping\n",dif);
		
		if(dif>money){
			printf("add money : ");
			scanf("%d",&add_money);
		
		add_money+=money;
		
		printf("Your new balance : %d",add_money);
		
		dif=add_money-total;
		
		if(money<=total){
			
			printf("You have not suffitiont money . Please add more money\n");
			
			printf("add money : ");
			scanf("%d",&add_money);
		
		add_money+=money;
		
		printf("Your new balance : %d",add_money);
		
		if(money>=total){
			
			printf("You can purcahse your products sucssesfully\n Thank you for shopping");
			
		}else{
			
			printf("You have not suffitiont money . Please add more money\n");
			
			printf("add money : ");
			scanf("%d",&add_money);
		
		add_money+=money;
		
		printf("Your new balance : %d",add_money);
			
		}
	
		}else{
			
		printf("You can purcahse your products sucssesfully\n Thank you for shopping");
			
		}
		
		}
		
	}	
	
	}else{
	
	printf("Sorry, you have not enough balance");
	
}

}
