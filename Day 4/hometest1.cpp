#include<stdio.h>

main(){

char name[128];
char fn[128];
char sur[128];
int age;

printf("Enter your name in capital letter : ");
scanf("%[A-Z]s",&name);

printf("Enter your father's name : ");
scanf("%s",&fn);

printf("Enter your surname : ");
scanf("%s ",&sur);


printf("Enter your age : ");
scanf("%d",&age);

char bod[128];
printf("Enter your birth date : ");
scanf("%c",bod);


printf("Your full name is %s %s %s. You are %d years old. Because your birth date is %c.",name,fn,sur,age,bod);




}
