#include<stdio.h>
#include<string.h>

struct{
	
	char name[50];
	int roll;
	int std;
	float marks;
	
}student;//ob;


main(){

strcpy(student.name,"Yaksh Jethava");
student.roll=64;
student.std=12;
student.marks=75.5;

printf("%s\n%d\n%d\n%f\n",student.name,student.roll,student.std,student.marks);

}
