/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE 
** STRICTLY ADHERED TO THE TENURES OF THE 
** OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. 
 */
//Author: Noah Bennett
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "lab4.h"


//Grocery store inventory program
int main(int argc, char* argv[]) {
	//initialize function pointer array
	void (*functions[])(Node **) = {total_revenue, wholesale_cost, current_investment, total_profit, total_sales, average_profit, print_items_instock, print_items_ostock, print_department_items, add_new_item, delete_item};
	void (*functions2[])(Node**, char*) = {write_file};

	//initilize variables
	int option = 0, cont = 0;
	Node **grocery_items = calloc(1, sizeof(Node));
	cont = read_input(grocery_items, argv[1], argv[2]);

	//get first option choice if user wanted to continue the program
	if(cont == 0) {
		printf("The program has ended.\n");
		return 0;
	}
	print_options();
	scanf(" %d", &option);

	//run program until option 12 is selected
	while(option < 13) {
		if(option != 12) {
			functions[option - 1](grocery_items);
			print_options();
			scanf(" %d", &option);
		} else {
			write_file(grocery_items, argv[3]);
			return 0;
		}
	}

	return 0;
}

