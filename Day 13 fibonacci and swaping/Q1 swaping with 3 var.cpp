#include<stdio.h>

main(){

int a,b,swap;

printf("Enter the value of a and b : \n");
scanf("%d %d",&a,&b);

printf("a = %d\n",a);
printf("b = %d\n",b);

swap=a;
a=b;
b=swap;

printf("Reverse a = %d\n",a);
printf("reverse b = %d",b);

}
