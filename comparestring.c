#include <stdio.h>
#include <string.h>

void compare_s(char s1[], char s2[]){
    if(!strcmp(s1, s2)){
        printf("The strings are equal.\n");
    }
    else{
        printf("The strings are different.\n");
    }
}

int main(){
    char s1[100], s2[100];

    fgets(s1, 100, stdin);
    fgets(s2, 100, stdin);

    compare_s(s1, s2);

    return 0;
}