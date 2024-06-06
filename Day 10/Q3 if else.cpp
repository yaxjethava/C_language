#include<stdio.h>

main(){

int a,b,c;

printf("Enter the marks of Maths : ");
scanf("%d",&a);

printf("Enter the marks of Science : ");
scanf("%d",&b);

printf("Enter the marks of Computer : ");
scanf("%d",&c);


float sum =(a+b+c)/3;

printf("Your avrege marks : %f ",sum);

if(sum>33){
	printf("Pass");
	
}else
 {
	printf("Fail");
}

}

