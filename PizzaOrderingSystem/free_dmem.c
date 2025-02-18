//Author: Noah Bennett

#include <stdlib.h>
#include "lab3.h"

//free dynmic memory that was allocated
void free_dmem(char **ingredients, char*** customer_pizza, int num_ingredients, int num_customer_ingredients) {

	//free the ingredients array
	if(ingredients != NULL) {
		for(int i = 0; i < num_ingredients; i++) {
			free(ingredients + i);
		}
		ingredients = NULL;
	}

	//free the customer pizza array
	if(customer_pizza != NULL) {
		for(int i = 0; i < num_customer_ingredients; i++) {
			free(customer_pizza + i);
		}
		customer_pizza = NULL;
	}

}
