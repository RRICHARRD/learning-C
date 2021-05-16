#include <stdio.h>

void main() {
	
	puts("incrementation");
	putchar('\n');

	int number = 0;
		
	while(number <= 300) 
		printf("-> %03d\n", number++);
	
	putchar('\n');
	
	puts("Press <ENTER>");
	getchar();

	int i;
	int b;
	for(i=0, b=5; i<=300 /*&& b<0*/; i++)
		printf("-> i: %b%03d \t -> b: %b%03d\n", i, b++);
}
