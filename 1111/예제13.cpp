#include<stdio.h>

int main(){
	char voca[50];
	int len=0;
	printf("영단어 입력: ");
	scanf(" %s", &voca);
	 
	while(voca[len]!='\0'){
		len++;
	}
	printf("입력한 영단어의 길이는 %d\n", len);
}
