#include<stdio.h>

main(){

int rows;

printf("Enter number for get a star pettern : ");
scanf("%d",&rows);

for(int i=0; i<=rows; i++){// outer loop for rows
	
	for(int j=0; j<i; j++){// inner loop for star printting
		
	printf("* ");	
		
	}

	printf("\n");
	
}

}
