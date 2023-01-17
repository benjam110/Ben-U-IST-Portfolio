#include <stdio.h>

int main() {
	char str[20];

	printf("Type in a word: ");
	scanf("%s", &str);
	
	for(int i = 0; str[i] != 0; i++){
		printf("%c = %i in ascii\n", str[i], str[i]);
		if(str[i] > 96 && str[i] < 173)
			str[i] -= 32;
	}

	printf("Your uppercase string is: %s\n", str);
	return 0;
}
