#include<stdio.h>

void fun(int *a,int *b,int *c,int *total){
	
	int sumOfAll = *a + *b + *c;
	 
	*total = sumOfAll;
	
}

main(){

int x,y,z,total;

printf("Enter three value : ");
scanf("%d %d %d",&x,&y,&z);

fun(&x,&y,&z,&total);

printf("%d",total);


}
