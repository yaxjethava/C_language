#include<stdio.h>

main(){

int a;
int sum=0;

printf("Enter any number for get fibonacci : ");
scanf("%d",&a);

for(int i=1; i<=a; i++){
	
	sum+=i;	
	
	printf("%d\n",sum);

}


}
