#include<stdio.h>

int main(){

	int i=1, j;
	/*
	for(i=1;i<=5;i++){
		for(j=1;j<i;j++){
			printf("0");
		}
	printf("*\n");
	}
	*/
	while(i<=5){
		j =1;
		while(j<i){
			printf("0");
			j++;
		}
		printf("*\n");
		i++;
	} 
}
