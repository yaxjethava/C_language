#include<stdio.h>

main(){

int i,j;
int radius;

printf("Enter the value of radius : ");
scanf("%d",&radius);

for(i= -radius; i<=radius; i++){
	for(j= -radius; j<=radius; j++
	){
		
		if(i*i+ j*j-4 <= radius*radius){
			printf("* ");
			
		}else{
			printf("  ");
		}
		
	}
	printf("\n");
}
}
