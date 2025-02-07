//Author: Noah Bennett
#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

//Delete an item from the grocery list/linked list
void delete_item(Node **grocery_item) {
	Node *node_holder = *grocery_item, *previous_node = NULL; 
	int stock;

	//make sure grocery list isnt empty
	if (grocery_item == NULL || *grocery_item == NULL) {
        	printf("The grocery list is empty.\n");
        	return;
	}

	//prompt user for stock number
	printf("Please enter the grocery item stock number you wish to delete: ");
	scanf(" %d", &stock);

	//Find the item with the matching stock number and remove it, if it is the first item only change that, if it's not use previous to set next
	while (node_holder != NULL) {
		if (node_holder -> grocery_item.stockNumber == stock) {
			if (previous_node == NULL) {
                		*grocery_item = node_holder -> next;
			} else {
				previous_node -> next = node_holder -> next;
            		}

			free(node_holder);
			printf("Grocery item with stock number %d has been deleted.\n", stock);
			return;
        	}

        	previous_node = node_holder;
        	node_holder = node_holder -> next;
	}

	
}

