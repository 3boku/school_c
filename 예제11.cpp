#include <stdio.h>

int main(){
	int n, i=0;
	printf("정수입력: ");
	scanf(" %d", &n);
	
	do{
		printf("I love(?) progrmming\n", i);
		i++; 
	}while(i<n);
}
