#include <stdio.h>

int main(){
	char voca[50];
	int cnt, i=0;
	
	printf("���ܾ� �Է�: ");
	scanf(" %s", &voca);
	
	while(voca[i] !='\0')
		i++;
	printf("�Է��� ���ܾ���� ���̴� %d", i);
}
