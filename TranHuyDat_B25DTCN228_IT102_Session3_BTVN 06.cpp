#include <stdio.h>

int main(){
	float canhday,chieucao;
	printf("nhap do dai canh day \n");
	scanf("%f",&canhday);
	
	printf("Nhap do dai chieu cao\n");
	scanf("%f",&chieucao);
	
	float S = (float)1 / 2 * canhday * chieucao;
	printf("S = 1 / 2 * %.2f * %.2f = %.2f\n",canhday,chieucao,S);
	
	return 0 ;
}
