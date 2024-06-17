#include<stdio.h>

main(){

int mark;
printf("Enter your marks : ");
scanf("%d",&mark);

if(mark<=100 && mark>=90){

	printf("A+ grade");

}else if(mark<=90 && mark>=80){

	printf("A grade");

}else if(mark<=80 && mark>=70){

	printf("B+ grade");
	
}else if(mark<=70 && mark>=60){

	printf("B grade");
	
}else if(mark<=60 && mark>=50){

	printf("C grade");
	
}else if(mark<=50 && mark>=40){

	printf("D grade");
	
}else if(mark<=40 && mark>33){
	
	printf("E grade");
}else{
	
	printf("Fail , Better luck next time");
}
}
