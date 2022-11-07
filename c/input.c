#include <stdio.h>

int main() {
	int var, var2;
	printf("Type in two integers: ");
	scanf("%i%i", &var, &var2);
	if(var==1||var2==1){
		printf("Haha! Haha! One!\n");
	}
	printf("The sum of your numbers is %i\n", var + var2);
	return 0;
}
