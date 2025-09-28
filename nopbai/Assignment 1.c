#include <stdio.h>
#include <conio.h>
#include <string.h>
int main (){
	int n; 
    printf(" Nhap do dai chuoi: ");
    scanf("%d", &n);
    getchar(); 
    char s[n+1];
    printf(" Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    
    int dem = 0;
    while(s[dem] != '\0'){
    	dem++;
    	printf("\n Dem so ki tu trong chuoi s la: %d", dem);
	}

	int dodaichuoi = strlen(s);
	int doixung = 1;
	for(int i = 0; i < dodaichuoi / 2; i++){
		if(s[i] != s[dodaichuoi - 1 - i]){
			doixung = 0; 
			break;
		}
	}
	
	if(doixung) printf("\n Chuoi doi xung");
	else printf("\n Chuoi khong doi xung");
	printf("\n Chuoi in nguoc la: ");
	for(int i = dodaichuoi-1; i >= 0; i--){
		printf("%c", s[i]);
	}
	return 0;
}
          