#include <stdio.h>

double ex(double a, int b){
    double res =1;
    for(int i=0;i<b;i++ ){
        res *= a;
    }
    return res;
}

int isInt(double a){
	int res = 0;
	for(int i=0;i<a+1;i++){
		if(i+1==a){
			res  += 1;
		}
	}
	return res;
}
int main(){
    double n,x,sum = 1;
    scanf("%lf %lf",&n,&x);

    if(n<=0||isInt(n)==0){
        printf("Error");
        return 0;
    }

    for (int i=1;i<n+1;i++){
        sum += ex(x,i);
    }
    printf("%lf",sum);
    return 0;
}
