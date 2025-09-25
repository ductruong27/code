#include <stdio.h>

int main (){
	int a, b, c, tong;
	printf("Diem Toan la: ");scanf("%d", &a);
	printf("Diem Ly la: ");scanf("%d", &b);
	printf("Diem Hoa la: ");scanf("%d", &c);
	tong = a + b + c;
	printf("Tong diem la: %d ", tong);
	printf("\nDiem trung binh la: %d", tong/3);
	return 0;
}
