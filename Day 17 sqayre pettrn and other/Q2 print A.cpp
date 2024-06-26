#include<stdio.h>

main(){

int rows ;
printf("Enter your ntows for print square : ");
scanf("%d",&rows);

for (int i=1; i<=rows; i++){
	for(int j=1; j<=rows; j++){
		
		if(i==1 || i==rows/2 || j==1 || j==rows){
			
			printf("* ");
			
		}else{
			printf("  ");
			
		}
	}
	printf("\n");
}

}
