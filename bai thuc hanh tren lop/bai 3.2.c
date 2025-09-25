#include <stdio.h>

int main (){
	float r, Chu_vi, Dien_tich;
	printf("Ban kinh hinh tron la: ");scanf("%f", &r);
	Chu_vi = 2 * 3.14159*r;
	Dien_tich = 3.14159*r*r;
	printf("Chu vi M la: %f", Chu_vi);
	printf("\nDien tich S la: %f", Dien_tich);
	return 0;
}