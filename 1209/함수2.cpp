#include<stdio.h>

int f(int n){
	int sum;
	int i;
	for(i=1;i<=n;i++)
		sum+=i;
	return sum;
}

int main(void){
		printf("гу=%d\n", f(10));
}
