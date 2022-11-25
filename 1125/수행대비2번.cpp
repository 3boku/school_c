#include <stdio.h>

int main(){
	char voca[50];
	int cnt, i=0;
	
	printf("영단어 입력: ");
	scanf(" %s", &voca);
	
	while(voca[i] !='\0')
		i++;
	printf("입력한 영단어는의 길이는 %d", i);
}
