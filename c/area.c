#include <stdio.h>

int main() {
	int length, width, area;
	printf("Enter the length of the rectange: ");
	scanf("%i", &length);
	if(length<=0){
		printf("ERROR! Not acceptable dimensions. Please input a positive integer.");
		return 0;
	}
	printf("Enter the width of the rectange: "); 
	scanf("%i", &width);
	if(width<=0){
		printf("ERROR! Not acceptable dimensions. Please input a positive integer.");
		return 0;
	}
	area = length * width;
	printf("The area of this rectangle is %i square units.\n", area);
	return 0;
}
