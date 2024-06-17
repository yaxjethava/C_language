#include<stdio.h>
#include<string.h>

main(){

char ch[6]={'a','b','c','d','e'};
int age[4];

for (int i=0; i<=4; i++){
	
	printf("Your name is %c : ",ch[i]);
	scanf("%d",&age[i]);

}
 
	printf("\nYou have entered %d, %d, %d, %d, %d",age[0],age[1],age[2],age[3],age[4]);

}
