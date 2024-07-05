#include<stdio.h>

main(){

char str[]="HELLO WORLD";

for(int i=0; str[i] != NULL ; i++){
	
	if(str[i] >='A'&& str[i]<='Z'){
		
	printf("%c",str[i]+32);	
		
	}else{
		
		printf(" ");
		
	}
	
}

}
