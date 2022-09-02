#include<stdio.h>

int main(){
	int num=1, result=1;
	
	for( ; ; ){
		if(num%2!=0)
			result*=num;
		num++;
		if(num>5) break;	
	}
	printf("%d", result);
}
