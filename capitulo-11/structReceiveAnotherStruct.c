#include <stdio.h>

typedef struct{
	int day;
	int mounth;
	int year;	
} DATE;

typedef struct{
	DATE born;
	char gender;
	float height;
	float weight;
	char name[30];
} PERSON;

int main(void){
	
	PERSON Richard;
	strcpy(Richard.name, "Developer Richard");
	Richard.gender = 'M';
	Richard.height = 5.75;
	Richard.weight = 150.99;
	Richard.born.day = 01;
	Richard.born.mounth = 12;
	Richard.born.year = 1995;
	
	puts("Informations about Richard");
	
	printf("Name:%s\nGender:%c\nHeight:%f\nWeight:%f\nBorn:%d/%d/%d\n", Richard.name, Richard.gender, Richard.height, Richard.weight,
	Richard.born.day, Richard.born.mounth, Richard.born.year);
	
	return 0;
}
