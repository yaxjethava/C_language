#include<stdio.h>
#include<string.h>

main(){

char* product[128]={"milk","potato","tomato","colgate","sugar"};
int price[128];
int total=0;

for(int i=0; i<=4; i++){
	
	printf("%s : ",product[i]);
	scanf("%d",&price[i]);
	
	total += price[i];
}
printf("Your total bill : %d",total);
}
