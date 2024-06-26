#include<stdio.h>

main(){

for(int i =0; i<5;i++){
	for(int j=0; j<5-i; j++){

		
		if(j%2==0){
			printf("1");
		}else{
			printf("0");
		}
	
	}
	
	printf("\n");
}

}
