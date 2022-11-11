#include<stdio.h>

int main(){
	// 10 20 30
	// 40 50 60
	
	int i;
	int j;
	int a[2][3]={{10, 20, 30}, {40, 50, 60}};
	printf("%d\n", a[0][1]);
	printf("%d\n", a[1][2]);
	
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
		printf("%d ", a[i][j]);
		}	
		printf("\n");
	}
	/*
	printf("%d %d %d\n", a[0][0], a[0][1], a[0][2]);
	printf("%d %d %d\n", a[1][0], a[1][1], a[1][2]);
	*/
}
