#include<stdio.h>

main(){

int rows ;
printf("Enter your ntows for print square : ");
scanf("%d",&rows);

for (int i=1; i<=rows; i++){
	for(int j=1; j<=rows; j++){
		
		
	//   top       bottom    left     right
		if(i==1 || i==rows || j==1 || j==rows){
			
			printf("* ");
			
		}else{
			printf("  "); // 3 spaces
			
		}
	}
	printf("\n");
}

}
