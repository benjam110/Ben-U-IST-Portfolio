#include <stdio.h>

int main() {
	char str[30];

	printf("Type in a phrase (without spaces, words capitalized) : ");
	scanf("%s", &str);
	
	for(int i = 1; str[i] != 0; i++){
		if(str[i] >= 65 && str[i] <= 90){
			for(int c = -1; str[i+c] != 0; c++){
			//	str[i+c+1] = str[i+c];
				char alt[20];
				for(int e = 0; str[i+c] != 0; e++){
					alt[e] = str[i+c];
				}
			}
			printf("%s\n", str);
			str[i] = 32;
		}
	}

	printf("Your phrase is: %s\n", str);
	return 0;
}
