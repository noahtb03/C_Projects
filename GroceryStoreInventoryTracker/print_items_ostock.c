//Author: Noah Bennett
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

//Print all items currently out of stock
void print_items_ostock(Node **grocery_item) {
	//create node holder
	Node *node_holder = *grocery_item;
	int ostock_counter = 0;

	//print table headers
	printf("Out of Stock Grocery Item List: \n\n");
	printf("Stock#\tQuantity\tDepartment\tItem\n");

	//populate table with items out of stock
	while (strlen(node_holder -> grocery_item.item) > 0) {
        	if ((node_holder -> grocery_item.pricing.wholesaleQuantity) - (node_holder -> grocery_item.pricing.retailQuantity) == 0) {
            		printf("%u\t%u\t\t%-10s\t%-10s\n", node_holder -> grocery_item.stockNumber, (node_holder -> grocery_item.pricing.wholesaleQuantity) - (node_holder -> grocery_item.pricing.retailQuantity), node_holder -> grocery_item.department, node_holder -> grocery_item.item);
			ostock_counter++;
		}
        
        	node_holder = node_holder -> next;
	}
	
	//if no items are out of stock, print that fact
	if(ostock_counter == 0) {
		printf("There are no items currently out of stock.");
	}

	printf("\n\n");
}
