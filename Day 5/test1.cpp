#include<stdio.h>
#include<string.h>

main(){

char name[128];
printf("Enter your name : ");
scanf("%[^\n]s \n",&name);

int l= strlen(name);
printf("%d\n\n",l);

for(int i=0; i<=l; i++) {

	printf("index no : %d %c\n",i,name[i]);
}

}
