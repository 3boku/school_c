#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	int i;
	gets(str);
	printf("str�� ���ڱ��� : %d\n", (int)strlen(str));
	for(i=(int)strlen(str)-1;i>=0;i--)
		printf("%c", str[i]);
}
