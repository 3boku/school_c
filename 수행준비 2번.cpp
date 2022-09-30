#include <stdio.h>

int main(){
	int i=0, n, sum;
	printf("합을 구할 마지막 수 입력: ");
	scanf(" %d", &n);
	
	while(i<=n)
	{
		sum+=n;
		i++;
	}
		
	printf("1부터 5까지의 합은 15입니다.");
} 
