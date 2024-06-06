#include<stdio.h>

main(){

//get odd number with while loop

int a=1,b;
printf("Enter the number ,from there you want odd number : ");
scanf("%d",&b);

while(a<=b){

if(a%2==1){
	
	printf("%d\n",a);
}	
a++;	

}
}
