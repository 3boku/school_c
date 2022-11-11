#include<stdio.h>

int main(){
	int n=1;
	int sum=0;
	do{
		if(n%2!=0)
			sum=sum+n;
		n+=1;
	}while(n<=50);
	
	printf("%d", sum);
}
