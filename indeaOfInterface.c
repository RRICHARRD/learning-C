#include<stdio.h>

void putSpacesBeforeWord(int totalSpaces){
	int i;
	for(i=1; i<=totalSpaces; i++)
		printf("%c", (char)32);
}

void showCharacter(char character, int times){
	int i;
	for(i=1; i<=times; i++)
		printf("%c", character);
	putchar('\n');
}

int arrayLength(char *word){
	int i, length;
	for(i=length=0; word[i]!='\0'; i++)
		++length;		
	return length;
}

void showWord(char *word){
	int i;
	for(i=0; word[i]!='\0'; i++)
		printf("%c", word[i]);
	putchar('\n');
}

void buildTitle(char *word, char character){
	showCharacter(character,arrayLength(word)+4);
	putSpacesBeforeWord(2);
	showWord(word);
	showCharacter(character,arrayLength(word)+4);
}

int main(void){
	
	char character; 
	char *title = "PAYMENT";
	
	puts("Welcome, let's build you title theme...\n\n");
		
	printf("Your title is\n%c ", (char)26);
	showWord(title);
	
	printf("\nDigit the character you want to use arround title\n%c ", (char)26);
	scanf(" %c", &character);
	
	putchar('\n');
	buildTitle(title, character);
		
	getch();
	return 0;
}


