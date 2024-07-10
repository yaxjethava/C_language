#include<stdio.h>
#include<string.h>

main(){

end:
	
// Get password by user
char pass[25];
printf("Create your password : ");
scanf("%s",&pass);


//for get string lenght
int len = strlen(pass);


//for take 1 digit, when entire conditions is true
int c1 =0,c2 =0,c3 =0,c4 =0;


if(len<6){ // for length cheaking
	
	printf("Your password is not strong.\n\n");
 	goto end; 
    
}else{

	for(int i=0; i<len; i++){
	
			//A to Z 
	if(pass[i]>= 'A'  && pass[i]<='Z' ){ //when condition is true, 1 add in entire integer
		
		c1++;
		
			//a to z          		
    }else if( pass[i]>='a' && pass[i]<='z'){
    	
    	c2++;
    	
			//0 to 9     	
	}else if (pass[i]>='0' && pass[i]<='9'){
		
		c3++;

			//for special character	(ASCII code)	
	}else if(pass[i]>=32 && pass[i]<=47 || pass[i]>=58 && pass[i]<=64 || pass[i]>=91 && pass[i]<=96 || pass[i]>=123 && pass[i]<=126){
		
		c4++;
	
	}else{
	
	// when any condition is flase ,so all integers munis 1 
	c1 -= 1;
	c2 -= 1;
	c3 -= 1;
	c4 -= 1;
	
	}
}


 if (c1>=1 && c2>=1 && c3>= 1 && c4>=1){ // when condition is true	
 	
	printf("Your password is strong.");
//	repeat=1;
	
	
}else{     
	printf("Your password is not strong.\n\n");
	goto end;
}
}
}
