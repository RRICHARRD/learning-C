#include <stdio.h>

void main() {
	
	int year;
	int mounth;
	int day;
	
	printf("Enter year: ");
	scanf("%d", &year);
	
	printf("Enter mounth: ");
	scanf("%d", &mounth);
	
	printf("Enter day: ");
	scanf("%d", &day);
	
	printf("%d/%d/%d", year, mounth, day);
}
