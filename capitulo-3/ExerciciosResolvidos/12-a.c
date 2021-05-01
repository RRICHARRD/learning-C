#include <stdio.h>

void main() {
	
	if ((2+3) == -(-2 -3))
		puts("positive");
	else 
		puts("negative");
		
	int number = -(-2 -3);
	printf("%d", number);
}
