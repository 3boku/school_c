#include<stdio.h>

int main(){
	int count=1, sum=0;
	
	while(1){
		sum+=count;
		count+=2;
		if(count>=100) break; 
	}
	printf("1~100���� Ȧ���� ��: %d", sum);
}
