#include <stdio.h>

int main(){
    int a,check = 0;
    scanf("%d",&a);
    for(int i=2;i<(a/2 + 1);i++){
        if(a%i==0){
            check+=1;
        }
    }
    if(a==1||(a!=2 && check!= 0)||a<=0){
        printf("Khong phai so nguyen to");
    }else {
        printf("La so nguyen to");
    }
    return 0;
}