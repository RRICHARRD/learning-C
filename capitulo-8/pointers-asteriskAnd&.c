#include<stdio.h>

int main(void){
	
	int richard = 44;
	int janete = 18;
	int marilene = 92;
	int *fernando = &marilene;
	
	printf("marilene item %d\n", marilene);
	printf("marilene adress %d\n", &marilene);
	printf("fernando -> marilene adress %d\n", fernando);
	printf("fernando -> marilene item %d\n", *fernando);
	printf("fernando adress %d\n", &fernando);
	
	printf("\njanete adress %d\n", &janete);
	printf("janete item %d\n", janete);
	
	fernando = &janete;
	printf("new fernando -> janete item %d\n", *fernando);
	printf("new fernando -> janete adress %d\n", fernando);
	printf("fernando adress %d", &fernando);
	
	getch();
	return 1;
}
