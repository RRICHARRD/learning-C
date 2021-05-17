#include<stdio.h>

int digitVerification(char number){
	return (number >= 0 && number <=9);
}

void terminated(void){
	puts("-- Terminated --");
}

int main(){

	char userDigit;
	
	while(1){ /*CTRL-C to stop*/

		!puts("Enter with one digit");
		printf("%c ", (char)16);
		scanf("%d", &userDigit);
	
		if(digitVerification(userDigit))
			puts("Numeral digit"); //return stop program, the compiler "think" main return something
		else
			break;
	}
	
	printf("%d\n", digitVerification(userDigit));
	terminated();
	
	getchar();
	return 1;
}
