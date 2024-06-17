#include<stdio.h>

main(){

int num;

printf("Enter number for get a star pettern : ");
scanf("%d",&num);

for(int i=0; i<=num; i++){// outer loop for rows
	
	for(int j=0; j<i; j++){// inner loop for star printting
		
	printf("%d ",j+1);	
		
	}

	printf("\n");
	
}

}
