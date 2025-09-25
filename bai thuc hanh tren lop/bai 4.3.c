#include <stdio.h>

int main(){
    int a,sum = 0;
    scanf("%d",&a);
    if ( a >= 1000 ){
        printf("ERROR");
        return 0;
    }
    while (a>0) {
        sum+=a%10;
        a/=10;
    }
    printf("%d",sum);
    return 0;
}