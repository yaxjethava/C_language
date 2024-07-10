#include<stdio.h>
#include<string.h>

// string comparition

main(){

char email[30]="jethavayax99@gmail.com";
char pass[20]="Yax76238#";

char enter_email[25],enter_pass[20];

printf("Enter your email : ");
scanf("%s",&enter_email);

printf("Enter your password : ");
scanf("%s",&enter_pass);

int em = strcmp(enter_email,email);

int ep = strcmp(enter_pass,pass);

if(em == 0 && ep == 0 ){
	
	printf("Login Successful...");
	
}else{
	printf("Login Failed. Invalid Credentials.");

}

}
