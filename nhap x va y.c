#include <stdio.h>

int main(){
	float X, Y, A, B, C;
	printf("Nhap X: ");scanf("%f", &X);
	printf("Nhap Y: ");scanf("%f", &Y);
	A = X*X + Y*Y;
	B = (X + Y) * (X + Y);
	C = (X - Y) * (X - Y);
	printf("Gia tri cua A la: %.2f", A);
	printf("\nGia tri cua B la: %.2f", B);
	printf("\nGia tri cua C la: %.2f", C);
	return 0;
}
