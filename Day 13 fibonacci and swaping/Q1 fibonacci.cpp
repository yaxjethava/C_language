#include<stdio.h>

main(){

int a=0,b=1,sum=0;
int n;

printf("Enter your number that you want series : ");
scanf("%d",&n);

for(int i=0; i<=n; i++){
	
	printf("%d\n",sum);
	sum=a+b;
	b=a;
	a=sum;
}

}
