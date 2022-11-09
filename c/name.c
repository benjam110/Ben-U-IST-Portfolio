#include <stdio.h>

int main() {
	char name[30];
	printf("Enter the name of your character: ");
	scanf("%s", &name);
	printf("That's a stupid name. Try again: ");
	scanf("%s\n", &name);
	printf("Really? %s? You can do better: ", name);
	scanf("%s\n", &name);
	printf("Come on, now you're just messing with me! Give it a real name: ");
	scanf("%s\n", &name);
	printf("Yes! That's it! %s it is!\n", name);
	return 0;
}
