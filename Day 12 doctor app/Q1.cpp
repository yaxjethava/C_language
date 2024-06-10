#include<stdio.h>

main(){

int num ;
int c;

printf("Enter your temprature : ");
scanf("%d",&c);

printf("If you have cemtums of given dieses\n1.swelling\n2.vomit\n3.vomit and swelling");
scanf("%d",&num);

if(num == 3){
	
	printf("You have vomit and swelling ,so your medicine are promethazine ,diphenhydramine and ondansetron ");
	
}else if( num == 1){
	
	printf("You have swelling ,so your medicine is NSAID ");
	
}else if(num == 2 ){
	
	printf("You have vomit ,so your medicine is Metoclopramide");
	
}else {
	
	printf("You are okey");
}
if(c>37){
	
	printf("\nYou have fiever also ,so take this medicine : paracitamol");
}else if(c<35){
	printf("\nYou have meleriya do take this medicine : ");
}}
