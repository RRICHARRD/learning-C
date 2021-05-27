#include<stdio.h>
/*
	This program verify adresses and
	change the value of variable by using procedures, 
	to make it, need to use pointers, precisely two pointers (line 35).
*/


int numberOnee = 10;

int verifyAdress(int numberOne, int *numberTwo){
	return (numberOne == numberTwo);
}

char * boolean(int boolean){
	if(boolean == 0)
		return "false";
	else 
		return "true";
}

int scopeAdress(int varScope){
	return &varScope;
}

int incrementingItem(int *adress, int incrementor){
	return *adress+incrementor;
}

void incrementingAdressItem(int *adress){
	int *pointer = adress;
	++*pointer;	//apparently must need to be pre-increment
}

void incrementingAdressItem2(int *adress, int incrementor){
	int *pointer = adress;
	*pointer+=incrementor;	
}

int main(void){
	
	int numberOne = 30;
	int *numberTwo = &numberOne;
	
	printf("Is same adress %s\n", boolean(verifyAdress(&numberOne, numberTwo)));
	
	if(scopeAdress(numberOne) == &numberOne)
		printf("is equals %d == %d", scopeAdress(numberOne), &numberOne);
	else 
		printf("is not equals %d != %d\n", scopeAdress(numberOne), &numberOne);
	
	
	/*------------------------*------------------------*/
	
	printf("numberOne local scope:%d\n \bfunction scope: %d\n", numberOne, incrementingItem(&numberOne, 25));
	
	printf("new numberOne %d\n", numberOne);//interesting, do not change
	
	incrementingAdressItem(&numberOne);
	printf("new numberOne(second try) %d\n", numberOne);
	
	incrementingAdressItem2(&numberOnee, 100);
	
	printf("numberOnee (global) %d", numberOnee);
	
	return 0;
}
