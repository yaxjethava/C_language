#include<stdio.h>

main(){

int num;
int sum=0;

do{
	
	printf("Enter your num : ");
	scanf("%d",&num);
	sum+=num;	
	
}while(num!=0);

if(num<0){
		
		printf("sum=0\n");
		
	}else{
		
	printf("sum = %d",sum);
		
	}


}
