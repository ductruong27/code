#include <stdio.h>

int ex(int a){
    int res =1;
    for(int i=1;i<a+1;i++ ){
        res *= i;
    }
    return res;
}
int main(){
    int a,c;
    scanf("%d",&a);

    
    if(a<0||a>=8){
        printf("ERROR");
        return 0;
    }

    c = ex(a);
    printf("%d",c);
    return 0;
}