#include <stdio.h>  
int main(){

float fahr, cels;
int maxf, minf, step;

maxf = 300.0;
minf = 0.0;
fahr = minf;
step = 20;

while(fahr <= maxf){
	cels = (fahr - 32) * (5.0 / 9.0);
	printf("%4.0f° Fahrenheit = %6.1f° Celsius\n", fahr, cels);
	fahr = fahr + step;
}
return 0; 
}