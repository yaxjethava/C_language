#include<stdio.h>

main(){

//for get even number with do while

int a,n=1;
printf("Enter any positive number : ");
scanf("%d",&a);

do{
	
if(n%2==0){
	
printf("%d\n",n);
	
}
	
	n++;
}while(n<=a);


}
