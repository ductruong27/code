#include <stdio.h>

int main(){
    int a,b,UCLN,BCNN=0;
    scanf("%d %d",&a,&b);
    if(a<=0||b<=0){
        printf("ERROR");
        return 0;
    }
    for(int i=1;i<( ((a<b)?a:b) + 1);i++){
        if(a%i==0 && b%i==0){
            UCLN=i;
        }
    }

    int j= (a>b)?a:b;
    while(BCNN == 0){
        if(j%a==0 && j%b == 0){
            BCNN = j;
        }
        j++;
    }
    printf("%d\n",UCLN);
    printf("%d",BCNN);
    return 0;
}