#include <stdio.h>

int main() {
	int length, width, perimeter;
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
	perimeter = 2 * length + 2 * width;
	printf("The perimeter of this rectangle is %i units.\n", perimeter);
	return 0;
}
