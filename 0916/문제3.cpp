#include<stdio.h>

int main(){
	int i, num1, num2;
	
	printf("������� ���� �� ���� �Է�: ");
	scanf(" %d %d", &num1, &num2);
	
	for(i=1;i<=100;i++){
		if(i%num1==0&&i%num2==0){
			printf("%d ", i);
		}
	}
}
