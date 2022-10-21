#include<stdio.h>

int main(){
	int num;
	scanf(" %d", &num);
	
	switch(num){
			case 1:
				printf("1을 입력\n");
				break;
			
			case 2:
				printf("2을 입력\n");
				break;
			case 3:
				printf("3을 입력\n");
				break;
			case 4:
				printf("4을 입력\n");
				break;
			default:
				printf("입력오류\n");
				break;
	}
}
