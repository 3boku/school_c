#include<stdio.h>

int main(){
	int num;
	scanf(" %d", &num);
	
	switch(num){
			case 1:
				printf("1�� �Է�\n");
				break;
			
			case 2:
				printf("2�� �Է�\n");
				break;
			case 3:
				printf("3�� �Է�\n");
				break;
			case 4:
				printf("4�� �Է�\n");
				break;
			default:
				printf("�Է¿���\n");
				break;
	}
}
