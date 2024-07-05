#include<stdio.h>


int finalprice(int m, int b,int a,int s){
	
	int total(){
		
		int totalp= m+b+a+s;
		return totalp;
		
	}
	int printotal = total();
	
	int discount(){
		
		int dis = printotal-((printotal*25)/100);
		
		return dis;	
	}
	
	int printdic = discount();
	
	int gst(){
		
		int gstformula = printdic + ((printdic*18)/100);
		return gstformula;
	}
	
	return gst();
	
}



main(){

int m,b,a,s;

printf("Enter the price of Mango : ");
scanf("%d",&m);

printf("Enter the price of Banana : ");
scanf("%d",&b);

printf("Enter the price of Apple : ");
scanf("%d",&a);

printf("Enter the price of Stobbery : ");
scanf("%d",&s);

int price = finalprice(m,b,a,s);

printf("The final price with GST  : %d",price);

}
