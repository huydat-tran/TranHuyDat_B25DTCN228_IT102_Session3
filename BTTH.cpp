#include <stdio.h>
#include <math.h>
int main (){
    float a,b;
	
	printf("Nhap so a\n");
	scanf("%f",&a);
	
	printf("Nhap so b\n");
	scanf("%f",&b);
	
	float S = (float)sqrt(pow(a,2) + pow(b,2)) / (a + b) + (float)(sqrt(a) + sqrt(b)) / (a * b);
	
	
	printf("S = %.2f",S);
	
	return 0;
	
}
