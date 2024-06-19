#include<stdio.h>

main(){

int rows;

printf("Enter the number : ");
scanf("%d",&rows);

for(int i=0; i<rows; i++){
	
	for(int j=0; j<rows; j++){
		
		if(j<rows-i){
			printf("*");
		}else{ 
		
		printf(" ");	
		
		}
	}
	printf("\n");
	
}



}
