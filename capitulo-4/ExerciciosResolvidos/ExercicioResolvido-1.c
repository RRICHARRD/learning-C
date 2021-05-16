#include <stdio.h>

main() {
	
	int ASCII;
	
	for(ASCII=65; ASCII<2000; ASCII++)
		printf("%d --> %c\n", ASCII, ASCII); 
}
