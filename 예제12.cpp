#include <stdio.h>

int main(){
	int num;
	
	do{
		scanf(" %d", &num);
		
 		if(num > 0){
 			if(num%2==0) 
			 
 				printf("Â¦¼ö\n");
			else
			 
		 		printf("È¦¼ö\n");
		}
	}while(num>0);
}
