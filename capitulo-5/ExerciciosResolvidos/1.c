#include<stdio.h>

int verifyIfNumberIsEqualThenFive(int number){
	return number == 5;
}

void terminated(void){
	puts("-- TERMINATED --");
}

int main(){
	
	int number;
	int loop = 1;
	
	do {
		puts("Press a number");
		printf("%c ", (char)16);
		scanf("%d", &number);
		
		if(verifyIfNumberIsEqualThenFive(number))
			printf("CONGRATS ! %d is correcty\n", number, --loop);
		else
			puts("SORRY, try one more time !");
	} while(loop);
	
	terminated();
	return 1;
}
