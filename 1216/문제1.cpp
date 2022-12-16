#include<stdio.h>
#define pi 3.141592

float cal_area(float radius);

int main(void){
	float r, area;
	
	printf("원의 반지름을 입력하시오 : ");
	scanf("%f", &r);
	area = cal_area(r);
	printf("원의 면적은 %.3f입니다.", area);
}

float cal_area(float radius){
	return radius*radius*pi;
}
