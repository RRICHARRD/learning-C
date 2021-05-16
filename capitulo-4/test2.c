#include <stdio.h>

void main(){

	int quit = 1;

	do {
		puts("1 - Menu");
		puts("2 - Day meals");
		puts("3 - Payment");
		puts("4 - Email");
		puts("5 - Quit");
		
		int userResponse;
		scanf("%d", &userResponse);
		
		switch(userResponse){
			case 1 :puts("--- Menu ---");
				break;
			case 2 :puts("--- Day meals ---");
				break;
			case 3 :puts("--- Payment ---");
				break;
			case 4 :puts("--- Email ---");
				break;
			case 5 : quit=0;
				break;
			default:puts("*** Invalid option ***");
		}
		
	} while(quit);
}
