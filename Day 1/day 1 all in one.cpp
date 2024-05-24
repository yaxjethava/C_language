#include<stdio.h>

main(){
	
	int r=16;
	float l=9.5;
	float b=5.6;
	int h=18;
	int price=120;
	int month=9;
	float pi=3.14;
	
	float ans1= pi*r*r;
	float ans2= l*l;
	float ans3= 0.5*b*h;
	int   ans4= price*r*month/100;
	float ans5= 2*pi*r;
	
	printf("Ans1 %.3f\n",ans1);
	printf("Ans2 %.3f\n",ans2);
	printf("Ans3 %.3f\n",ans3);
	printf("Ans4 %.3d\n",ans4);
	printf("Ans5 %.3f",ans5);
	
	
}