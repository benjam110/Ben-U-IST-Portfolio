#include <stdio.h>

// Ask user for 3 integers
// Use scanf("%i", varname);
// Print out the sum of all 3 variables

int main() {
	int x, y, z;
	printf("Enter 3 integers: ");
	scanf("%i%i%i", &x, &y, &z);
	printf("The sum of your numbers is %i\n", x+y+z);
	return 0;
}
