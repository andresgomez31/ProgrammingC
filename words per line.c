#include <stdio.h>

int main(){
	int c, index = 0;
	char outp[10000];

	while((c = getchar()) != EOF){
		if((c == ' ') || (c == '\n') || (c == '\t')){
			putchar('\n');
		}
		else{
			outp[index] = putchar(c);
			index++;
		}
	}
return 0;
}
