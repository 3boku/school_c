#include<stdio.h>

int main(){
	int i;
	int num[5];
	
	num[0] = 10;
	num[1] = 20;
	num[2] = 30;
	num[3] = 0;
	num[4] = 0;
	for(i=0;i<5;i++){
		printf("num[%d] = %d\n", i, num[i]);
	}
}
