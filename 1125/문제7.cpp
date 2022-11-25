#include <stdio.h>

int main(){
	char mark[5][5]={'\0'};
	int i, j, cnt=4;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==j||j==cnt) mark[i][j]='X';
		}
		cnt--;

	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%c", mark[i][j]);
		}
		printf("\n");
	}
}
