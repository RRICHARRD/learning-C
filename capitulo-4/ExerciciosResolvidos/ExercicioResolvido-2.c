#include<stdio.h>

void main(){
	
	int firstColumn;
	int secondColumn;
	
	for(firstColumn=0, secondColumn=10; firstColumn<=10 && secondColumn>=0; firstColumn++, secondColumn--)
		printf("%d %d\n", firstColumn, secondColumn);
}
