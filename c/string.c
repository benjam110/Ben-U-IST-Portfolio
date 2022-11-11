#include <stdio.h>
#include <string.h>

int main() {
	char name[30];
	char y[3];
	while(1){
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
