#include<stdio.h>
#include<string.h>

main(){
	
char name[]="YAKSH JETHAVA";
int l= strlen(name);

printf("%d\n",l);

for(int i=0; i<=l; i++){
	
	printf("Index no : %d \t%c\n",i,name[i]);
}

}
