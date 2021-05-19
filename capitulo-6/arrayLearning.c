#include<stdio.h>
#define LENGTH(x)  (sizeof(x) / sizeof((x)[0]))

int main(){

	int i;
	int arabicNumbers[9];	
	
	for(i=0; i<9; i++)
		arabicNumbers[i] = i+1;
	
	for(i=0; i<9; i++)
		printf("%d\t->\t%d\n", i, arabicNumbers[i]);
		
	printf("length: %d\n", (int) sizeof(arabicNumbers) / sizeof(arabicNumbers[0]));
	printf("length: %d\n", LENGTH(arabicNumbers));	
	
	char vogals[] = {'a','e','i','o','u'};
	printf("length: %d\n", LENGTH(vogals));
	
	return 1;
}
