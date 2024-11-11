#include <stdio.h>

void strip(char s1[], char s2[]){
	
int i, j, k;

for(i = k = 0; s1[i] != '\0'; i++){
	int found = 0;
	for(j = 0; s2[j] != '\0'; j++){
		if(s1[i] == s2[j]){
			found = 1;
			break;
		}
	}
	if(!found){
		s1[k++] = s1[i];
	}
	
}

s1[k] = '\0';
}

int main() {

char s1[1000], s2[1000];

fgets(s1, 1000, stdin);
fgets(s2, 1000, stdin);

strip(s1, s2);

printf("%s", s1);

return 0;

}
		