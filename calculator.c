#include <stdio.h>
#include <math.h>

float n1 = 0;

float sum(float n2){
    return n1 + n2;
}

float sustract(float n2){
    return n1 - n2;
}

float multiply(float n2){
    return n1 * n2;
}

float divide(float n2){
    return n1 / n2;
}

float residue(float n2){
    return ((int)n1 % (int)n2);
}

int main(){
    float n;
    char input[100];
    char operator;

while((fgets(input, 100, stdin)) != NULL){
    sscanf(input, "%c %f", &operator, &n);

    switch(operator){
        case '=':
            n1 = n;
            break;
        case '+':
            n1 = sum(n);
            break;
        case '-':
            n1 = sustract(n);
            break;
        case '*':
            n1 = multiply(n);
            break;
        case '/':
            n1 = divide(n);
            break;
        case '^':
            n1 = pow(n1, n);
            break;
        case '%':
            n1 = residue(n);
            break;
        default:
            printf("Operator not detected.\n");
            break;
    }
    printf("= %.2f", n1);
}

return 0;
}