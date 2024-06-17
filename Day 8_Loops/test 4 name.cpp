#include<stdio.h>
#include<string.h>
main(){

char name[128];

printf("Enter your name : ");
scanf("%[^\n]s",&name);

int l= strlen(name);

for(int i=0; i<1; i++){

printf("index no : %d %c\n",13,name[13])	;
printf("index no : %d %c\n",12,name[12])	;
printf("index no : %d %c\n",11,name[11])	;
printf("index no : %d %c\n",10,name[10])	;
printf("index no : %d %c\n",9,name[9])	;
printf("index no : %d %c\n",8,name[8])	;
printf("index no : %d %c\n",7,name[7])	;
printf("index no : %d %c\n",6,name[6])	;
printf("index no : %d %c\n",5,name[5])	;	
printf("index no : %d %c\n",4,name[4])	;
printf("index no : %d %c\n",3,name[3])	;
printf("index no : %d %c\n",2,name[2])	;
printf("index no : %d %c\n",1,name[1])	;
printf("index no : %d %c",0,name[0])	;
	
}

}
