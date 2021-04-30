#include <stdio.h>

void main() {
	
	int numberOne;
	int numberTwo;
	
	printf("Enter the first number: ");
	scanf("%d", &numberOne);
	
	printf("Enter the second number: ");
	scanf(" %d", &numberTwo);
	
	printf("%d + %d = %d\n",numberOne, numberTwo, numberOne+numberTwo);
	printf("%d - %d = %d\n",numberOne, numberTwo, numberOne-numberTwo);
	printf("%d * %d = %d\n",numberOne, numberTwo, numberOne*numberTwo);
	printf("%d / %d = %d\n",numberOne, numberTwo, numberOne/numberTwo);
	printf("%d %% %d = %d\n",numberOne, numberTwo, numberOne%numberTwo);
}
