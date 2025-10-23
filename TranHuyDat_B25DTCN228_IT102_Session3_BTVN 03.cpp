#include <stdio.h>
#include <math.h>
int main(){
	float a;
	printf("Nhap vao ban kinh hinh tron\n");
	scanf("%f",&a);
	float C =  2* a * M_PI;
	printf("CHu vi hinh tron la = %.3f\n",C);
	float S = M_PI * pow(a,2);
	printf("Dien tich hinh tron la = %.3f",S);
	return 0;
	
}
