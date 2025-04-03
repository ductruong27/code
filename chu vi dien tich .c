#include <stdio.h>

int main() {
    int chieu_dai, chieu_rong;
    
    scanf("%d %d", &chieu_dai, &chieu_rong);
    
    int chu_vi = 2 * (chieu_dai + chieu_rong);
    long long dien_tich = (long long)chieu_dai * chieu_rong;
    printf("Chu vi HCN la: %d\n", chu_vi);
    printf("Dien tich HCN la: %lld\n", dien_tich);
    
    return 0;
}
