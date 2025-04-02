#include <stdio.h>

int main (){
	float x, y, min;
	scanf("%f%f", &x, &y);
	if(x <y){
		min = x;
	}
	else {
		min = y;
	}
	printf("%f", min);
	return 0;
	
}
