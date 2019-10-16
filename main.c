#include "functions.h"
#include<stdio.h>
#include<stdlib.h>

int main() {
	printf("\n---Human Initialized---\n\n");
	struct human example = createHuman();
	printHuman(example);
	
	changeFirstName(&example, "David");
	printf("\n---Changed First Name to David---\n\n");
	printHuman(example);
	
	return 0;
}
