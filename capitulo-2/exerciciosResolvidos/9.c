#include <stdio.h>

void main() {
	
	int day;
	int mounth;
	int year;
	
	printf("Enter the day: ");
	scanf("%d", &day);
	
	printf("Enter the mounth: ");
	scanf(" %d", &mounth);
	
	printf("Enter the year: ");
	scanf(" %d", &year);
	
	printf("%d/%d/%d", day, mounth, year);
}
