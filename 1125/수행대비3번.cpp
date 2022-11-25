#include <stdio.h>
#include <string.h>
 
int main(){
	char str[100];
	int i;
	
	gets(str);
	printf("str의 문자길이 : %d\n", (int)strlen(str));
	
	for(i=(int)strlen(str);i>=0;i--){
		printf("%c", str[i]);
	}
}
