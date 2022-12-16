#include <stdio.h>

void print_num(void){
	int num;
	printf("정수 입력: ");
	scanf("%d", &num);
	printf("입력한 숫자는 %d입니다.", num); 
}

int main(void){
	print_num();
	
	return 0;
}
