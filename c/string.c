#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
	char name[30];
	char y[3];
	while(true){
		printf("Enter the name of your character: ");
		scanf("%s", &name);
		printf("Is %s correct?(y/n)", name);
		scanf("%s", y);
		if(strcmp(y, "y") == 0){
			break;
		}
	}
	printf("Your character's name is %s\n", name);
	if(strcmp(name, "Sonic")==0){
		printf("Chili dogs!\n");
	}
	return 0;
}
