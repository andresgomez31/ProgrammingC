#include <stdio.h>

int main(){

int c, ind = 0;
char outp[10000];

while((c = getchar()) != EOF){
	if(c == ' '){
		outp[ind] = c;
		c = getchar();
		ind++;

		while(c == ' '){
			c = getchar();
		}
		outp[ind] = c;
		ind++;
	}
	else{
		outp[ind] = c;
		ind++;
	}
}
outp[ind] = '\0';
printf("%s", outp);

return 0;

}