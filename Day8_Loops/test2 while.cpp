#include<stdio.h>

main(){

int num;
int sum=0;
	

while(num>0){
	
    printf("Enter your num : ");
	scanf("%d",&num);
	
	sum+=num;
	
}
    if(num<0){
		
		printf("sum=0\n");
		
	}else{	printf("Sum = %d",sum);
	
	}


}
