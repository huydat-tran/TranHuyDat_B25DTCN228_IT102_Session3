#include<stdio.h>
#include<math.h>
int main(){
	float Toan,Van,Anh;
	
	printf("nhap diem Toan");
	scanf("%f",&Toan);
	
	printf("Nhap diem Van");
	scanf("%f",&Van);
	
	printf("Nhap diem Anh");
	scanf("%f",&Anh);
	
	float TongDiem = Toan + Van + Anh;
	float TrungBinh = (Toan + Van + Anh) / 3;
	
	printf("Tong diem = %.2f + %.2f + %.2f = %.2f\n",Toan,Van,Anh,TongDiem);
	printf("TrungBinh = (%.2f + %.2f + %.2f) / 3 = %.2f\n",Toan,Van,Anh,TrungBinh);
	
	return 0;
}
