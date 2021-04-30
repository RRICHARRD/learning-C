#include <stdio.h>

void main() {
	
	long int seconds;
	
	printf("Enter seconds: ");
	scanf("%ld", &seconds);
	
	printf("%d seconds is %d minut(s)\n", seconds, seconds/60);
	printf("%d seconds is %d hour(s)\n", seconds, (seconds/60)/60);
}
