#include<stdio.h>
double centi_to_meter(int cm);

int main(void)
{
	double res;
	int h;
	printf("Ű �Է� : ");
	scanf("%d", &h);
	res = centi_to_meter(h);
	printf("%dcm�� %.2fm��", h, res);
}

double centi_to_meter(int cm){
	double meter;
	meter = (float)cm/100;
	return meter;
}
