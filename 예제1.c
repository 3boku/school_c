#include<stdio.h>

int main(){
	int num[3];
	int i; 
	
	num[0] =10;
	num[1] = 20;
	num[2] = 30;
	
	for(i=0;i<3;i++){
		printf("num[%d] = %d\n", i, num[i]);
	}
}
