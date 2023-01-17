#include <stdio.h>

int main() {

	int i;

	printf("Enter the length of the array : ");

	scanf("%i", &i);

	int a[i];
	
	for(int c = 0; c < i; c++){
	       printf("Enter the value for a[%i] : ", c);
	       scanf("%i", &a[c]);
	}	

	for(int c = 0; c < i; c++){
	       printf("a[%i] = %i\n", c, a[c]);
	}	
	return 0;
}
