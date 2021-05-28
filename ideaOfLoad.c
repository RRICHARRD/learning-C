#include<stdio.h>
#include<stdlib.h>

void clearScr(){
    system("@cls||clear");
}

int main(void){
	
	int i, j;
	/*for(i=0; i<50; i++){
		printf("\n\t%c", '-');
		clearScr();
		printf("\n\t%c", '\\');
		clearScr();
		printf("\n\t%c", '|');
		clearScr();
		printf("\n\t%c", '/');
		clearScr();
	}
	*/
	
	
	for(i=0; i<50;i++){
		
		printf("\n\n\n\t\t\t%c\n", '|');
		printf("\t\t\t%c\n", '|');
		printf("\t\t\t%c\n", '|');
		printf("\t\t\t%c\n", '|');
		printf("\t\t\t%c\n", '|');
		printf("\t\t\t%c\n", '|');
		printf("\t\t\t%c\n", '|');
		printf("\t\t\t%c\n", '|');
		printf("\t\t\t%c\n", '|');
		printf("\t\t\t%c\n", '|');
		printf("\t\t\t%c\n\n\n", '|');
		clearScr();
		printf("\n\n\n\t\t\t\t\t %c\n",'/');
		printf("\t\t\t\t\t%c\n",'/');
		printf("\t\t\t\t\t\b%c\n",'/');
		printf("\t\t\t\t\t\b\b%c\n",'/');
		printf("\t\t\t\t\t\b\b\b%c\n",'/');
		printf("\t\t\t\t\t\b\b\b\b%c\n",'/'); //-> middle
		printf("\t\t\t\t\t\b\b\b\b\b%c\n",'/');
		printf("\t\t\t\t\t\b\b\b\b\b\b%c\n",'/');
		printf("\t\t\t\t %c\n",'/');
		printf("\t\t\t\t\%c\n",'/');
		printf("\t\t\t\t\b%c\n",'/');
		clearScr();
		printf("\n\n\n\n\n\n\n\n\n\t\t\t%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		printf("%c", '-----');
		
		clearScr();
	
	}
	
	getch();
	return 0;
}
