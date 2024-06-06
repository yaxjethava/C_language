#include<stdio.h>

main(){

int x,y;
printf("Enter the value of X and Y to get their squere\n");
scanf("%d",&x);
scanf("%d",&y);

int sum=(x*x)-(2*x*y)+(y*y);

printf("Your answer of (x-y)squere : %d",sum);

}
