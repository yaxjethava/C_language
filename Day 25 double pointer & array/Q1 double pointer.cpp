#include<stdio.h>

void add(int **a,int **b){
	
	**a = **a+**b ;
	**b = **a * **b; 
	
}

main(){

int x,y;
printf("Enter value of x : ");
scanf("%d",&x);

printf("Enter value of y : ");
scanf("%d",&y);

int *px = &x;
int *py = &y;

int **ppx = &px;
int **ppy = &py;

printf("\nBefore addition :\nx : %d\n",x);
printf("Before multiplay :\ny : %d\n",y);

add(ppx,ppy);

printf("\nAfter addition :\nx : %d\n",x);
printf("After multiplay :\ny : %d\n",y);

}
