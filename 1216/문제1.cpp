#include<stdio.h>
#define pi 3.141592

float cal_area(float radius);

int main(void){
	float r, area;
	
	printf("���� �������� �Է��Ͻÿ� : ");
	scanf("%f", &r);
	area = cal_area(r);
	printf("���� ������ %.3f�Դϴ�.", area);
}

float cal_area(float radius){
	return radius*radius*pi;
}
