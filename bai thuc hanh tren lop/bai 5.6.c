#include <stdio.h>

int main (){
	char a[2000], S[1000], T[1000];
	int max, tg, c[26]={0};
	gets(a);
	gets(T);
	strcat(a,T);
	max = strlen(a);
	for(int i = 0; i< max; i++)
	{
		if(a[i] >= 'a' && a[i] <= 'z') c[a[i]-'a']+=1;	
	}

	for(int i = 0; i<26; i++){
		if(c[i]>0) printf("%c", 'a' + i);
	}
	for ( int i = 0; i<26;i++){
		if(c[i]>0) printf("\n%d", c[i]);
	}
	return 0;
}
