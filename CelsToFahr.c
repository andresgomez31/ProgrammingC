#include <stdio.h>

float cels_fahr(float temp, int conversion){ // Si 'conversion' == 1: Celsius a Fahrenheit, si 'conversion' == 0: Viceversa

float newtemp;

if(conversion){
    newtemp = temp*(9.0/5.0) + 32;
}
else{
    newtemp = temp/(9.0/5.0) - 32;
}

return newtemp;
}


int main(){

int i;
float temp;

    printf("Type '1' to convert Celsius to Fahrenheit, or 0 from Fahrenheit to Celsius: ");
    scanf("%d", &i);

    printf("Temperature: ");
    scanf("%f", &temp);

printf(" = %.2f°\n", cels_fahr(temp, i));

    return 0;
}