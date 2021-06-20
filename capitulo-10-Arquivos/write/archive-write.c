#include <stdio.h>

int main(void){
	
	FILE *test_txt;
	test_txt = fopen("test.txt", "w"); //"C:\\the\\arquive\\address\\test.txt"
	fprintf(test_txt, "My name is Richard\nWhat's your name?");
	fclose(test_txt);
	
	return 0;
}
