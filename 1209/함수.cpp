#include<stdio.h>
//�Լ����� => �ڷ��� �Լ���(�Ű�����) return ��

int add(int x, int y){
	int temp;
	temp = x+y;
	return temp;
}



void message(void){
	printf("����κ�����б�\n");
}
int main(void){
	int a=10, b=20;
	int result;
	
	result = add(a, b);
	printf("result = %d\n", result); 
	
	message();

	return 0;
} 
