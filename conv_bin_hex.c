#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*char* reverse(char s[]){
    int size;
    int i, j;

    for(size = 1; s[size - 1] != '\0'; size++);

    if(size == 0) return '\0';

    char reversed[size];

    for(i = 0, j = size; i <= size; i++, j--){
        reversed[i] =  s[j - 1];
    }
    return reversed;
}

int htoi(char s[]){
    int i, j;
    int sum = 0;
    char hex[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    for(i = 0; s[i] != '\0'; i++){
        for(j = 0; j < 16; j++){
            if(s[i] == hex[j]){
                sum = sum * 16 + i;
                break;
            }
        }
    }
    return sum;
}

int itoh(int n){
    int i, j;
    int temp;
    char hex[32];
    char hexC[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    for(i = 0; n == 0; i++){
        for(j = 0; j < 16; j++){
            temp = n % 16;
            n /= 16;
            hex[i] = hexC[temp];
            break;
        }
    }
    return reverse(hex);
}

char* itob(int n){
    char bin[64];
    int temp;
    int i, j;

    for(i = 0; n; i++){
        temp = n % 2;
        bin[i] = putchar(temp);
        n /= 2;
    }

    return reverse(bin);
}


int btoi(char bin[]){

    int sum = 0;
    int temp;
    int i, j;

    for(i = 0; bin[i] != '\0'; i++){
        temp = bin[i] - '0';
        sum += sum * 2 + temp;
    }
    return sum;
}

int main(){
    char s[32];
    char cnumber[32];
    int inumber;
    int option;

    printf("Type the corresponding number and next the number:\n");
    printf("\t1. From decimal to hexadecimal\n");
    printf("\t2. From hexadecimal to decimal\n");
    printf("\t3. From decimal to binary\n");
    printf("\t4. From binary to decimal\n");
    printf("\t1. From binary to hexadecimal\n");
    printf("\t1. From hexadecimal to binary\n");

    while((fgets(s, 32, stdin)) != NULL){
        sscanf(s, "%d %31s", &option, &cnumber);

        switch(option){
            case 1:
                inumber = atoi(cnumber);
                printf("%s", itoh(inumber));
                break;
            case 2:
                printf("%d", htoi(cnumber));
                break;
            case 3:
                inumber = atoi(cnumber);
                printf("%s", itob(inumber));
                break;
            case 4:
                printf("%d", btoi(cnumber));
                break;
            case 5:
                inumber = btoi(cnumber);
                printf("%d", itoh(cnumber));
                break;
            case 6:
                inumber = htoi(cnumber);
                printf("%d", itob(inumber));
                break;
            default:
                printf("Not a valid option. \n");
                break;
        }
    }
    return 0;
}*/