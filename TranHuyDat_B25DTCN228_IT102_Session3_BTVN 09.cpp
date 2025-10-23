#include <stdio.h>
#include <math.h>

int main(){
	float n,A;
	
	printf("Nhap so n\n");
	scanf("%f",&n);
	
	if(n<=1){
	printf("n phai lon hon 1\n");
	return 0;
	
}
	A = 1 /((n - 1) * n) + 1 / (n * (n + 1)) + 1 / ((n + 1) * (n + 2));
	
	printf("A = %.5f\n",A);
	
	return 0;
	
}
