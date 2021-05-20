#include<stdio.h>

int length(char *vect){
	int i = 0;
	while(vect[i] != '\0')
		i++;
	return i;
}

int isNull(char *vect){
	return (vect[0] == '\0'); //delimiter
}

char *booleanIsNull(int boolean){
	if(boolean == 1)
		return "true";
	else 
		return "false";
}

int charCount(char *vect, char charactere){
	int i, count; 
	for(i=count=0; vect[i] != '\0'; i++)
		if(vect[i] == charactere)
			count++;
	return count;
}

int main(){

	char name[50];
	
	printf("Enter with a name\n%c", (char) 16);
	gets(name);
	
	puts(name);
	
	
	char myName[] = "Richard";
	printf("My name is %s\n", myName);
	printf("My name length: %d\n", length(myName));
	
	
	char vect[4] = "rrrr"; //only first four characters 
	printf("vect[] is null -> %s %s\n", booleanIsNull(isNull(vect)), vect);
	
	
	printf("number of r's in vect[] is %d", charCount(vect, 'r'));
	
	return 1;
}
