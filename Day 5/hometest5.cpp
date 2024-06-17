#include<stdio.h>
#include<string.h>
main(){

int num;
int count;
int sum;

printf("Enter the positive number for get sum : ");
scanf("%d",&num);

for(count=1; count<=num; count++){
	
    sum += count;
}

printf("%d",sum);

}
