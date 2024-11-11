/*Definir max y min*/

#include <stdio.h>

int main(){

float max = -99999, min = 99999, n = 0.0;
char input[100];

while((n = getchar()) != EOF){
	if(n > max){
		max = n;
	}
	else if(n < min){
		min = n;
	}	
}	

printf("Maximum: %3.5f\n", max);
printf("Minimum: %3.5f\n", min);

return 0;

}