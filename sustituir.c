#include <stdio.h>

int main(){

char outp[10000];
int c, index = 0;

while((c = getchar()) != EOF){
	if(c == '\t'){
		outp[index] = putchar('>');
		index++;
		outp[index] = putchar('\b');
		index++;
		outp[index] = putchar('-');
		index++;
	}
	else if(c == '\b'){
		outp[index] = putchar('<');
		index++;
		outp[index] = putchar('-');
		index++;
	}
	else{
		outp[index] = putchar(c);
		index++;
	}
}

printf("%s", outp);

return 0;

}