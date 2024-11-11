#include <stdio.h>

unsigned getbits(unsigned x, unsigned p, unsigned n) { 
	return((x << (p - 1)) & ~(~0 >> n));
}


int main() {

int x, p, n, y;

x = 219; //11011011
p = 3; // 11 0 11011
n = 2; // 11 01 1011 -> 01 101100

// MASK 11000000

y = getbits(x, p, n);

printf("%d", y);

return 0;

}