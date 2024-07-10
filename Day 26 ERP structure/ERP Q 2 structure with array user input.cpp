#include<stdio.h>
#include<string.h>

//difine structure
struct Employee{
	
	int emp_id;
	char fs_name[50];
	char sc_name[50];
	int  emp_age;
	char emp_role[30];
	char emp_city[20];
	int emp_experience;
	char company_name[30];
	
};

main(){

//take array size by user
int n;
printf("Enter numbers of Employees : ");
scanf("%d",&n);

//difine array
struct Employee emp[n];

printf("\nEnter employee ditails : \n\n");

for(int i=0; i<n; i++){
	
	// take value of entire array
	
	printf("Employee : %d\n\n",i+1);
	
	printf("Employee ID : ");
	scanf("%d",&emp[i].emp_id);
	
	printf("Employee  first name : ");
	scanf("%s",&emp[i].fs_name);

	printf("Employee  Seacond name : ");
	scanf("%s",&emp[i].sc_name);	
	
	printf("Employee Age : ");
	scanf("%d",&emp[i].emp_age);
	
	printf("Employee role: ");
	scanf("%s",&emp[i].emp_role);
	
	printf("Employee city : ");
	scanf("%s",&emp[i].emp_city);
	
	printf("Employee experience : ");
	scanf("%d",&emp[i].emp_experience);
	
	printf("Company name : ");
	scanf("%s",&emp[i].company_name);

	printf("\n");	
}


for(int i=0; i<n; i++){
	
	strcat(emp[i].fs_name,emp[i].sc_name);
	
	printf("Employee Id : %d\n",emp[i].emp_id);
	printf("Employee Name : %s\n",emp[i].fs_name);
	printf("Employee Age : %d\n",emp[i].emp_age);
	printf("Employee role : %s\n",emp[i].emp_role);
	printf("Employee city : %s\n",emp[i].emp_city);
	printf("Employee Experience : %d\n",emp[i].emp_experience);
	printf("Company name : %s\n",emp[i].company_name);
	printf("\n");
}

}
