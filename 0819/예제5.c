#include<stdio.h>

int main() {
	int i=1, n, sum=0;
	printf("���� ���� ������ �� �Է� : ");
	scanf(" %d", &n);
	
	while(i<=n){
		sum=i+sum;
		i++;
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);
} 
