#include<stdio.h>

void copyVect(char *string, char *stringCopy){
	int i;
	for(i=0; string[i] != '\0'; i++)
		stringCopy[i] = string[i];
	stringCopy[i] = '\0';
}

void showString(char *string){
	int i;
	for(i=0; string[i] != '\0'; i++)
		printf("%c", string[i]);
}

int main(void){
	
	char name[25+1];
	char nameTwo[25+1];
	
	printf("Enter with a string\n%c ", (char) 16);
	gets(name);
	
	copyVect(name, nameTwo);
	printf("-- string copied --\n");
	showString(nameTwo);
	
	getch();
	return 1;
}
