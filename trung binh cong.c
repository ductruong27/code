#include <stdio.h>

int main (){
	int a, b, c, tong;
	printf("Nhap a: ");scanf("%d", &a);
	printf("Nhap b: ");scanf("%d", &b);
	printf("Nhap c: ");scanf("%d", &c);
	tong = a + b + c;
	printf("tong 3 so la: %d", tong);
	printf("\ntrung binh cong 3 so la : %d", tong/3);
	getch();
}
