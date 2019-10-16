#include "functions.h"
#include<stdio.h>
#include<stdlib.h>

struct human createHuman() {
	struct human h0;
	srand(time(0));
	int x = rand() % 3;
	
	if (x == 0) {
		h0.firstName = "Leo";
		h0.height = 1000;
	}
	else if (x == 1) {
		h0.firstName = "Alejandro";
		h0.height = 500;
	}
	else {
		h0.firstName = "Bobert";
		h0.height = 2;
	}
	return h0;
}

void printHuman(struct human h0) {
	printf("First Name: %s\n", h0.firstName);
	printf("Height: %d\n", h0.height);
}

void changeFirstName(struct human *toChange, char *firstName) {
	if (firstName != NULL) {
		toChange->firstName = firstName;
	}
}

