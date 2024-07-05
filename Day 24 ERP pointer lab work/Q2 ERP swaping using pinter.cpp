#include<stdio.h>

main(){

int x,y;

printf("Enter the value of x : ");
scanf("%d",&x);

printf("Enter the value of y : ");
scanf("%d",&y);

int *a = &y;
int *b = &x;

printf("Before swapping : \nx : %d\ny : %d\n",x,y);
printf("After swapping : \nx : %d\ny : %d\n",*a,*b);


}
