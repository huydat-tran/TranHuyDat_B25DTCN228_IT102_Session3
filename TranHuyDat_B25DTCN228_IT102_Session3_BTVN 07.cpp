#include <stdio.h>

int main (){

	int result = 0;

	int number,tmp;

	

	printf("Nhap so number\n");

	scanf("%d",&number);

	

	while(number > 0){

		tmp =  number % 10;

		result = result + tmp;

		number /= 10;

	}

	printf("S = %d",result);

	

	return 0;

}

	





