#include<stdio.h>
#include<string.h>

main(){

char name[68];
printf("Enter your name : ");
scanf("%[^\n]s\n",&name);
printf("You have entered %s\n\n",name);

char* sub[128]={"guj","eng","com","stat","acc"};
int mark[128];
int total;
for(int i=0; i<=4 ; i++){
	
	printf("%s :",sub[i]);
	scanf("%d",&mark[i]);
    total += mark[i];	
}
	float pr= total/5;
printf("  Total marks : %d \n Your pr are %f",total,pr);

}
