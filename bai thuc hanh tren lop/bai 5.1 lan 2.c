#include <stdio.h>
#include <math.h>

int sum(int a[], int n){
	int res = 0;
	for ( int i = 0; i < n; i ++){
		res += a[i];
	}
	return res;
}

int main(){
	int n, a[n];
	scanf("%d", &n);
	if (n <= 0) printf("Error");
	else{
		int a[n];
		for( int i = 0;i < n; i++)  scanf("%d", &a[i]);
		for( int i= n-1 ;i >=0 ; i--) printf("%d ", a[i]);
		printf("\n%d", sum(a,n));			
	}
	return 0;
}