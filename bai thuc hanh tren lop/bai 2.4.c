#include <stdio.h>

int main (){
	float x, y, max;
	scanf("%f%f", &x, &y);
	if (x>y){
		max = x;
	}
	else{
		max = y;
	}
	printf("%6.2f", max);
	return 0;
}