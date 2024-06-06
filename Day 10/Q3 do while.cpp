#include<stdio.h>

main(){

int a,n=1;
printf("Enter any posituve number : ");
scanf("%d",&a);

do{
	
if(n%2==0){
	
	printf("%d\n",n);
	
}
n++;

	
}while(n<=a);


}
