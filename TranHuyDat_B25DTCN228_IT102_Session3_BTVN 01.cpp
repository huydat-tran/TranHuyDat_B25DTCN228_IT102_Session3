#include <stdio.h>

int main (){
	char name[50];
	
	printf("Nhap ten cua ban");
	scanf("%[^\n]",&name);
	printf("Ho va ten %s",name);
	
	return 0;
	
}
