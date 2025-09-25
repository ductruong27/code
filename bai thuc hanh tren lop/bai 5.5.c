#include <stdio.h>
#include <math.h>

void nhap(int a[], int n){
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
int TongLonNhat(int a[], int n){
	if (n<2) return 0;
	int maxTong = a[0]+a[1];
	for (int i = 1; i < n-1; i ++){
		int Tong = a[i] + a[i+1];
		if (Tong > maxTong){
			maxTong = Tong;
		}
	}
	if (maxTong >0){
		return maxTong;
	} 
	else return 0;
}



int main(){
	int n;
	scanf("%d", &n);
	if (n >=2 && n<=10){
	int a[n];
	nhap(a,n);
	int ketqua = TongLonNhat(a,n);
	printf("%d", ketqua);
	}
	else printf("0");
}