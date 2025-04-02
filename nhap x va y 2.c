#include <stdio.h>
#include <math.h>
int main(){
	float X, Y, A, B, C;
	printf("Nhap X: ");scanf("%f", &X);
	printf("Nhap Y: ");scanf("%f", &Y);
	A = pow(X,2) + pow(Y,2);
	B = pow (X + Y,2);
	C = pow (X - Y,2);
	printf("Gia tri cua A la: %.2f", A);
	printf("\nGia tri cua B la: %.2f", B);
	printf("\nGia tri cua C la: %.2f", C);
	return 0;
}
