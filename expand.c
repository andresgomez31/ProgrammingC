#include <stdio.h>

void expand(char s[], char t[]){
	int i, j;
	for(i = j = 0; s[i] != '\0'; i++){
		switch(s[i]){
			case '\n':
				t[j++] = '\\';
				t[j++] = 'n';
				break;
			case '\t':
				t[j++] = '\\';
				t[j++] = 't';
		 		break;
			default:
				t[j++] = s[i];
				break;
		}
	}
	t[j] = '\0';
}

int main() {

char s[1000], t[1000];

fgets(s, 1000, stdin);

expand(s, t);

printf("%s", t);

return 0;

}