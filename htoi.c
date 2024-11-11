#include <stdio.h>

int htoi(char hex[]){

int i, result = 0;
int index;

char characters[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	
	for(i = 0; hex[i] != '\0'; i++){
		for(index = 0; index <= 15; index++){
			if(hex[i] == characters[index] || hex[i] == (characters[index] + ' ')){ 
				result = result * 16 + index;
			}
		}
	}
	if(hex[i] == '\0') return result;
}


int main() {

char hex[1000];

fgets(hex, sizeof(hex), stdin);
printf("%d", htoi(hex));

return 0;
}



	


	
	
		