#include <stdio.h>
#include <stdlib.h>

char text[1000];

int search(char s[]){
    int tfound= 0;
    int i, j;

    for(i = 0; text[i] != '\0'; i++){
        for(j = 0; s[j] != '\0' && text[i + j] == s[j]; j++);
        if(s[j] == '\0') tfound++;
    }
    return tfound;
}

void removeblnk(char s[]){
    int blnk = 0;
    int i, j = 0;

    for(i = 0; s[i] != '\0'; i++){
        if(s[i] == ' ' || s[i] == '\n' || s[i] == '\t'){
            if(blnk){
                s[j++] = s[i];
                blnk = 1;
            }
        }
        else{
            s[j++] = s[i];
            blnk = 0;
        }
    }
    s[j] = '\0';
}


int main(){
    int found;
    char word[32];

printf("Ingrese el texto: ");
fgets(text, 1000, stdin);

printf("\nAhora, la palabra a buscar: ");
fgets(word, 32, stdin);
removeblnk(word);

found = search(word);

if(found){
    printf("\nThe word was found %d times in the text. \n", found);
}
else{
    printf("\nThe word was not found in the text. \n");
}

    return 0;
}