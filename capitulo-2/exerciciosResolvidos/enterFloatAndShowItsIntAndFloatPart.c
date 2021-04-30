#include <stdio.h>

void main() {
	
	float floatNumber; 
	
	printf("Enter a float number: ");
	scanf("%f", &floatNumber);
	
	printf("integer: %d\n \bfloat: %f", (int)floatNumber, floatNumber - ((int)floatNumber));
}
