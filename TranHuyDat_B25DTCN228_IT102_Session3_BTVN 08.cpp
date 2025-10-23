#include <stdio.h>

int main(){
	int number,tmp;
	printf("Nhap so number\n");
	scanf("%d",&number);
	
	int result = 0;
	
	while(number > 0){
		tmp = number % 10;
		result = result * 10 + tmp;
		number /= 10;
		
	}
	
	printf("S = %d",result);
	return 0;
	
}
