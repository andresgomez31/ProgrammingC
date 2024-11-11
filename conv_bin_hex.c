#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char s[]){
    char temp;
    int size;
    int i, j;

    for(size = 1; s[size - 1] != '\0'; size++);

    for(i = 0, j = size; i <= size; i++, j--){
        temp = s[i];
        s[i] =  s[j - 1];
        s[j - 1] = temp;
    }
}

int htoi(char s[]){
    int i, j;
    int sum = 0;
    char hex[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    for(i = 0; s[i] != '\0'; i++){
        for(j = 0; j < 16; j++){
            if(s[i] == hex[j]){
                sum = sum * 16 + j;
                break;
            }
        }
    }
    return sum;
}

char* itoh(int n){
    int i, j;
    int temp;
    char *hex = malloc(32 * sizeof(char));
    char hexC[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    if(!hex) return NULL;

    do {
        temp = n % 16;
        hex[i++] = hexC[temp];
        n /= 16;
    } while (n > 0);
    reverse(hex);

    return hex;
}

char* itob(int n){
    char *bin = malloc(64 * sizeof(char));
    int temp;
    int i, j;

    if(!bin) return NULL;

    do {
        bin[i++] = (n % 2) + '0';
        n /= 2;
    } while (n > 0);
    reverse(bin);

    return bin;
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
    char *result;
    int inumber;
    int option;

    printf("Type the corresponding number and next the number:\n");
    printf("\t1. From decimal to hexadecimal\n");
    printf("\t2. From hexadecimal to decimal\n");
    printf("\t3. From decimal to binary\n");
    printf("\t4. From binary to decimal\n");
    printf("\t5. From binary to hexadecimal\n");
    printf("\t6. From hexadecimal to binary\n");

    while((fgets(s, 32, stdin)) != NULL){
        sscanf(s, "%d %31s", &option, &cnumber);

        switch(option){
            case 1:
                inumber = atoi(cnumber);
                result = itoh(inumber);
                printf("%s", result);
                free(result);
                break;
            case 2:
                printf("%d", htoi(cnumber));
                break;
            case 3:
                inumber = atoi(cnumber);
                result = itob(inumber);
                printf("%s", result);
                free(result);
                break;
            case 4:
                printf("%d", btoi(cnumber));
                break;
            case 5:
                inumber = btoi(cnumber);
                result = itoh(inumber);
                printf("%d", result);
                free(result);
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
}