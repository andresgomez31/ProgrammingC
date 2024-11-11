#include <stdio.h>
#include <string.h>

int main(){
    int i;
    char s[1000];

    fgets(s, 1000, stdin);

    for(i = 0; i < strlen(s); i++){
        if(s[i] == ' '){
            s[i] = '_';
        }
        printf("%c", s[i]);
    }

    return 0;
}