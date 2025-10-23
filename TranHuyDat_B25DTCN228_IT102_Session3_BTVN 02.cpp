#include <stdio.h>

int main() {
	float celsius,Fahrenheit;
	printf("Nhap nhiet do Celcious de chuyen doi");
	scanf("%f",&celsius);
	printf("Nhiet do Celsius = %.2f\n",celsius);
	
	Fahrenheit = celsius * 9/5 + 32;
	printf("Nhiet do Fahrenheit = %.3f\n",Fahrenheit);

	
	return 0;
	
}
