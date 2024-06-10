#include<stdio.h>

main(){

int a,b;

printf("Enter the value of a and b for swaping : \n");
scanf("%d %d",&a,&b);

printf("a = %d\n",a);
printf("b = %d\n",b);

a=a+b;
b=a-b;
a=a-b;

printf("Swaping value of a = %d\n",a);
printf("Swaping value of b = %d",b);
}
