#include <stdio.h>
#include <string.h>

void count_char(char s[], int size){
    int i, j;
    char chars[128];
    int repeated[128];

    for(i = 0; i < 128; i++){
        chars[i] = '\0';
        repeated[i] = 0;
    }
    
    for(i = 0; i < size; i++){
        int found = 0;

        for(j = 0; j < 128; j++){
            if(s[i] == chars[j]){
                repeated[j]++;
                found = 1;
                break;
            }
        }

        if(!found){
            for(j = 0; j < 128; j++){
                if(chars[j] == '\0'){
                    chars[j] = s[i];
                    repeated[j]++;
                    break;
                }
            }
        }
    }

    for(i = 0; i < strlen(chars); i++){
        printf("%c: %d\n", chars[i], repeated[i]);
    }
}


int main(){

    int size;
    char s[100];

    fgets(s, 100, stdin);

    size = strlen(s);

    count_char(s, size);

    return 0;
}