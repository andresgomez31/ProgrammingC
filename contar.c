#include <stdio.h>

int main(){

int blk, tb, nl, c;
blk = tb = nl = 0;

while((c = getchar()) != EOF){
	if(c == '\n'){
		nl++;
	}
	if(c == '\t'){
		tb++;
	}
	if(c == ' '){
		blk++;
	}
}

printf("%d, %d, %d.", blk, tb, nl);

return 0;

}