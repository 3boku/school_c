#include <stdio.h>

int get_min(){
	int num1=30, num2=20, num3=10;
	int min = 100;
	printf("�� ���� : %d %d %d\n", num1, num2, num3);
	
	min = num1>num2?num2:num1;
	min = min>num3?num3:min;
	
	return min;
}

int main(void){
	printf("�ּҰ� = %d", get_min()); 
	
	return 0;
}
