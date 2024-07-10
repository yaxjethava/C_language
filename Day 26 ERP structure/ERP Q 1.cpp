#include<stdio.h>
#include<string.h>

struct Student{
	
	int st_id;
	char stu_name[50];
	int stu_age;
	char stu_course[99];
	char stu_city[50];
	int stu_std;
	char stu_school[128];
	
};


main(){

struct Student student[5] = {
	
	{101,"Avinash Gohil",18,"Commerce","Rajkot",12,"Deepak high school"},
	{102,"Parth Solanki",19,"Commerce","Amreli",12,"C.K. high school"},
	{103,"YAksh Jethava",18,"Science","Amreli",12,"IT school of Science"},
	{104,"Ketan lodariya",19,"Science","Ahmedabad",12,"M.S. school"},
	{105,"Preet Pandya",20,"Arts","Vadodara",12,"Latitude school of Art"},			
};

for(int i=0; i<5; i++){
	
	printf("\nStudent : %d\n\n",i+1);
	printf("Student id : %d\n",student[i].st_id);
	printf("Name : %s\n",student[i].stu_name);
	printf("Age : %d\n",student[i].stu_age);
	printf("Course : %s\n",student[i].stu_course);
	printf("City : %s\n",student[i].stu_city);
	printf("Standard : %d\n",student[i].stu_std);	
	printf("School : %s\n\n",student[i].stu_school);					
}

}
