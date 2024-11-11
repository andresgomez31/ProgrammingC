#include <stdio.h>

int in_line(char a[], char b[], int size_a, int size_b){
    int i, j;

    for(i = 0; i < size_a; i++){
        for(j = 0; j < size_b; j++){
            if(a[i] != b[j]){
                break;
            }
            else if((j == (size_b - 1)) && a[i] == b[j]){
                return 1;
            }
        }
    }
return 0;
}

int main(){
    int size_line;
    int size_check;
    char line[256];
    char check[] = {'a'};

    size_line = sizeof(line) / sizeof(line[0]);
    size_check = sizeof(check) / sizeof(check[0]);

    while((fgets(line, 256, stdin)) != NULL){
        if(in_line(line, check, size_line, size_check)){
            printf("%s", line);
        }
    }
return 0;
}