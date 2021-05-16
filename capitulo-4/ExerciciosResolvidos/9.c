#include<stdio.h>

main(){
	
	int numberOfBranchs;
	char alphabet = 65;
	
	puts("Enter the number of branchs");
	printf("%c ", (char)16);
	scanf("%d", &numberOfBranchs);
	
	int i;
	int j;
	
	for(i=1; i<=numberOfBranchs; i++, alphabet++){
		for(j=1; j<=i; j++){
			printf("%c", alphabet);
		}
		putchar('\n');
	}
	
}
