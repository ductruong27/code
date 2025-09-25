#include <stdio.h>
#include <string.h>
#include <ctype.h>

void chuanHoa(char *s) {
    int i = 0, j = 0;
    int len = strlen(s);

    while (isspace(s[i])) i++;

    int spaceFlag = 0; 
    for (; i < len; i++) {
        if (!isspace(s[i])) {
            s[j++] = s[i];
            spaceFlag = 0;
        } else {
            if (spaceFlag == 0) {
                s[j++] = ' '; 
                spaceFlag = 1;
            }
        }
    }

   
    if (j > 0 && s[j - 1] == ' ') j--;
    s[j] = '\0'; 
}

int main() {
    char s[1000]; 
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    chuanHoa(s);
    printf("%s\n", s);
    return 0;
}
