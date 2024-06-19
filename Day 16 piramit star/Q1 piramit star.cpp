#include<stdio.h>

main(){


for(int i=0; i<=5; i++){
	for(int j=0; j<=9; j++){
		
		if(j>=6-i && j<=4+i){
			printf("%d",j);
			
		}else{
			printf(" ");
		}
		
	}
printf("\n");	
}

}
