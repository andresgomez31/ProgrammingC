/*F a Celsius con For*/

#include <stdio.h>

int main(){

float cels, fahr;

for(fahr = 0; fahr <= 300; fahr  = fahr + 20){
	cels = (fahr - 32) * (5.0 / 9.0);
	printf("%4.0f° Fahrenheit = %6.1f° Celsius\n", fahr, cels);
}
return 0;
}