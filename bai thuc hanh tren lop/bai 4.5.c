#include <stdio.h>
#include <math.h>


int main(){
    double a,b,c,delta;
    scanf("%lf %lf %lf",&a,&b,&c);

    delta = b*b - 4*a*c;

    if (a == 0 && b != 0){
        printf("%lf", -c/b);
        return 0;
    }else if(a == 0 && b == 0 && c == 0){
        printf("Phuong trinh vo so nghiem");
        return 0;
    }else if(a == 0 && b == 0 && c != 0){
        printf("Phuong trinh vo nghiem");
        return 0;
    }
     if(delta<0){
        printf("%lf+%lfi",-b/(2*a),sqrt(fabs(delta))/(2*a));
        printf("\n%lf-%lfi",-b/(2*a),sqrt(fabs(delta))/(2*a));
    }
    if(delta>0){
        printf("%lf",-b/(2*a)+sqrt(fabs(delta))/(2*a));
        printf("\n%lf",-b/(2*a)-sqrt(fabs(delta))/(2*a));
    }
    if(delta==0){
        printf("%lf",-b/(2*a)+sqrt(fabs(delta))/(2*a));
    }


    return 0;
}