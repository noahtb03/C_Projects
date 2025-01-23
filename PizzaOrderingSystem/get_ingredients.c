/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE 
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO 
THIS ASSIGNMENT. 
 */ 
//Author: Noah Bennett

#include <stdio.h>
#include <stdlib.h>
#include "lab3.h"

//Creates an array of the available ingredients
char **get_ingredients(int num_tops) {
	//allocate dynamic memory
	char **ingredients = (char**)calloc(num_tops, sizeof(char*));

	//prompt user
	printf("Enter the %d toppings, one to a line.\n", num_tops);

	//consume new line
	getchar();
	
	//add each topping to the array
	for(int i = 0; i < num_tops; i++) {		
		char *topping = get_item();
		*(ingredients + i) = topping;
	}

	return ingredients;
}

