#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(){
	int answer, cnt, guess;
	srand(time(NULL));
	answer = rand()%10+1;
	
	do{
		printf("1���� 100���� ���ڸ� ���纸����>> ");
		scanf("%d", &guess);
		cnt++;
		
		if(guess>answer)
			printf("������ ���ڰ� �����ϴ�.\n");
		else if(guess<answer)
			printf("������ ���ڰ� �����ϴ�.\n");
	}while(guess!=answer);
	
	printf("�����մϴ�! ������ %d�̰�, �õ�Ƚ��=%d\n", answer, cnt);
}
