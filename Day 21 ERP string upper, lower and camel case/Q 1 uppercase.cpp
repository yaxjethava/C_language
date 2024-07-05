#include<stdio.h>
#include<string.h>

main(){

char string[] = "hello world";

for(int i=0; string[i] != NULL ; i++)
{
	
	if(string[i]>='a' && string[i]<='z'){
		
	printf("%c",string[i]-32);
		
	}else{
		
		printf(" ");
		
	}
	
}
}

