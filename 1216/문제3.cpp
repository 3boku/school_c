#include <stdio.h>
int count_divisor(int n);

int main(void){
	int i, c;
	
		for(i=10;i<=15;i++){
			printf("%d의 약수의 개수 = ", i);
			c = count_divisor(i);
			printf("%d\n", c); 
		}
} 

int count_divisor(int n){
	int i, num = 0;
	
	for(i=1;i <= n;i++){
	 	if(n % i == 0) num++;
	}
	return num;
}
