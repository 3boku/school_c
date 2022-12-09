#include<stdio.h>
//함수정의 => 자료형 함수명(매개변수) return 값

int add(int x, int y){
	int temp;
	temp = x+y;
	return temp;
}



void message(void){
	printf("서울로봇고등학교\n");
}
int main(void){
	int a=10, b=20;
	int result;
	
	result = add(a, b);
	printf("result = %d\n", result); 
	
	message();

	return 0;
} 
