/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE 
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO 
THIS ASSIGNMENT. 
 */ 
//Author: Noah Bennett

#include <stdio.h>
#include "lab3.h"

//Take in number of ingredients, ingredients, take customer order then save it to a file if they wish to, free dynamic memory
int main(){
	int ingredients_on_hand, ingredients_ordered;

	//prompt user and get the ingredients on hand amount
	printf("How many fresh ingredients are available today? \n");
	scanf("%d", &ingredients_on_hand);

	//make an array for the ingredients on hand and display them to the customer
	char **ingredients_list = get_ingredients(ingredients_on_hand);
	display_ingredients(ingredients_list, ingredients_on_hand);

	//prompt the customer for the amount of toppings they want
	printf("How many toppings would you like on your pizza? \n");
	scanf("%d", &ingredients_ordered);

	//create an array for the ingredients the customer wants
	char ***customer_pizza = get_thispizza(ingredients_list, ingredients_ordered);

	//see if the customer wants to save their order to a file
	save_info(ingredients_list, customer_pizza, ingredients_on_hand, ingredients_ordered);

	//free dynamic memory
	free_dmem(ingredients_list, customer_pizza, ingredients_on_hand, ingredients_ordered);

	return 0;
}
