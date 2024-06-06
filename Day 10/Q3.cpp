#include<stdio.h>

main(){

int x,y,sum;
printf("Enter the value of X and Y for (x+y)^3 : \n");
scanf("%d",&x);
scanf("%d",&y);

sum=(x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y);

printf("Your answer : %d",sum);
}
