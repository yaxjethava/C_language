#include<stdio.h>

main(){

char str[]= "HelLo worLD";

for(int i=0; str[i] != NULL; i++){
	
	if(str[i]>= 'a' && str[i]<= 'z'){
		
		printf("%c",str[i]-32);
		
	}else if(str[i] >= 'A' && str[i] <= 'Z'){
		
		printf("%c",str[i]+32);
		
	}else{
		
		printf(" ");
		
	}
	
}


}
