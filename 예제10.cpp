#include<stdio.h>

int main(){
	int i;
	char str[9]="Goodtime";
	//'G', 'o', 'o', 'd', 't', 'i', 'm', 'e', '\0'
	for(i=0;i<9;i++)
		printf("str[%d] = %c\n", i, str[i]);
}
