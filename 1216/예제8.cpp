#include <stdio.h>

void tri_fun(int m){
	int i, j;
	
	for(i=1;i<=m;i++){
		for(j=1;j<=i;j++){
			printf("%3c", '*');
		}
		printf("\n");
	}
}

int main(void){
	int n=5;
	tri_fun(n);
	
	return 0;
}
