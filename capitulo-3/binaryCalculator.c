#include <stdio.h>

void main() {
	
	int numberOne;
	int numberTwo;
	int response = 0;
	char signal;
	
	printf("Enter with two integer numbers and the operator between than: ");
	scanf("%d%c%d", &numberOne, &signal, &numberTwo);
	fflush(stdin);

	switch(signal) {
		case '+': response = numberOne + numberTwo;
			break;
		case '-': response = numberOne - numberTwo;
			break;
		case '*': response = numberOne * numberTwo;
			break;
		case '/': response = numberOne - numberTwo;
			break;	
		default: printf("Invalid signal");
	}

	printf("%d %c %d = %d", numberOne, signal, numberTwo, response);
	
}
