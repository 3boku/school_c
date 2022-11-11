#include<stdio.h>

int main(){
	char a[]="Seoul Robotics";
	printf("%s\n", a);
	a[6] = '\0';
	printf("%s\n", a);
}
