//Author: Noah Bennett

#include <stdio.h>
#include <stdlib.h>

//Gets the item from the user
char *get_item() {
	//allocate memory
	char *topping = (char*)calloc(61, sizeof(char));

	//take in topping
	scanf("%[^\n]", topping);

	//consumer new line
	getchar();

	return topping;
}
