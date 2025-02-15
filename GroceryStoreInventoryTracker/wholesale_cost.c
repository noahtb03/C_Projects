//Author: Noah Bennett
#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"


//Calculate wholesale cost and print it out
void wholesale_cost(Node **grocery_item) {
	//create variables
	float wholesale_cost = 0.0;
    	Node *node_holder = *grocery_item;

	//add up wholesale cost until there are no nodes left in the linked list
    	while (node_holder != NULL) { 
        	wholesale_cost += (node_holder -> grocery_item.pricing.wholesalePrice) * (node_holder -> grocery_item.pricing.wholesaleQuantity);

        	node_holder = node_holder -> next;
	}

	printf("Total wholsesale cost: $%.2f\n", wholesale_cost);
}
