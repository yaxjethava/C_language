#include<stdio.h>

main(){

for(int i=5; i>=1; i--){
	for(int j=5; j>=1; j--){
		
		if(j<=i){
			printf("%d",j);
		}else{
			printf(" ");
		}
	}
	printf("\n");
}

}
