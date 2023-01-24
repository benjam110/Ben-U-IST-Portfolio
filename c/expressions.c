#include <stdio.h>

int main() {
	int a, b;
	char c;

	a = 10;
	b = 20;
	
	scanf("%c", &c);

	if(a > b) {
		printf("a > b = %i\n", a > b);
	}
	if(c >= 65 && c <= 90) {
		c += 32;
	}
	else if(!(c >= 97 && c <= 122)){
		printf("You entered something other than a letter\n");
		return 0;
	}
	printf("lowercase = %c\n", c);

	return 0;
}
