#include <stdio.h>

void print_print_n_times(char ch, int n){
	int i;
	for(i=1;i<=n;i++)
		printf("%c", ch);
}

int main(void){
	print_print_n_times('*', 7);
	
	return 0;
}
