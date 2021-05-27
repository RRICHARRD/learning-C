#include<stdio.h>

void showCharacters(char character, int times){
	int i;
	for(i=1; i<=times; i++)
		printf("%c", character);
	putchar('\n');
}

void firstCharacter(int i, char character){
	if(i==0)
		printf("%c\t", (char)character);
}

void lastCharacter(char character){
	printf("%c\n", character);
}

void showWord(char *word, int times, char character){
	int i;
	for(i=0; word[i]!='\0';i++){
		firstCharacter(i, character);
		printf("%c", word[i]);
	}
		lastCharacter(character);
}

void title(char *word, char character, int times){
	showCharacters(character, times);
	showWord(word, times, character);
	showCharacters(character, times);
}

int main(void){
	
	title("Richard", '+', 18);
	
	getch();
	return 0;
}
