#include<stdio.h>

void main(){
	
	int numberOfStars;
	const char star = 15;
	
	puts("Enter the number of stars");
	
	printf("%c ", (char)16);
	scanf("%d", &numberOfStars);
	
	int i;
	int j;
	
	for(i=1; i<=numberOfStars; i++){
		for(j=1; j<i; j++){
			printf("%c", star);
		}
		putchar('\n');	
	}

}
