#include<stdio.h>

main(){

int num,a,b;
printf("Enter the number from the below numbers : \n1.Addintion\n2.Substraction\n3.Multipication\n4.Divition\n");
scanf("%d",&num);

printf("Enter the numbers which you want a calculation\n");
printf("Number one : ");
scanf("%d",&a);

printf("Number two : ");
scanf("%d",&b);

switch(num){
	
	case 1 :
		printf("%d + %d = %d",a,b,a+b);
		break;
		
	case 2 :
		printf("%d - %d = %d",a,b,a-b);
		break;
		
	case 3 :
		printf("%d * %d = %d",a,b,a*b);
		break;
		
	case 4 :
		printf("%d / %d = %d",a,b,a/b);
		break;
		
	default : 
	    printf("Your number is not match");
		break;	
}

}
