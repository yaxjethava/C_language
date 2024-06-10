#include<stdio.h>

main(){

int a=0,b=1,sum=0;
int n;

printf("Enter value of n : ");
scanf("%d",&n);

for(int i=1; i<=n; i++){
	
	printf("%d",sum);
	sum=a+b;
	b=a;
	a=sum;
	
}

}
