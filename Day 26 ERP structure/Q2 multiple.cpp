#include<stdio.h>
#include<string.h>

struct Car{
	
	char com[50];
	char name[50];
	char color[30];
	int model;
	int price;
	
};

main(){

struct Car car[5]{
	
	{"Suzuki","Swift","White",2020,960000},
	{"Hyundai","Ctreta","Balck",2023,2000000},
	{"Suzuki","Ciaz","Blue",2023,1300000},
	{"Toyota","Fortuner Legender","Black",2023,5000000},
	{"Toyota","Innova Crysta","White",2023,3000000}
	
};

for(int i=0; i<5;i++){
	
	printf("Car %d\n\n",i+1);
	printf("Company : %s\n",car[i].com);
	printf("Car name : %s\n",car[i].name);
	printf("Color : %s\n",car[i].color);
	printf("Model : %d\n",car[i].model);
	printf("Price : %d\n",car[i].price);
	printf("\n");
}
}
