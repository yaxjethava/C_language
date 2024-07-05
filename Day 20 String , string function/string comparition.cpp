#include<stdio.h>
#include<string.h>

main(){

char name1[20]="Yaksh Jethava";
char name2[20]="Yaksh Jethava";

int result = strcmp(name1,name2);

// if both are same , so show false(0), and result are not same , so  show true(1)


if(result == 0){
	

	printf("The string are same means true(0)");
	
}else{
	
	printf("The string are not same means false(1)");
	
}

}
