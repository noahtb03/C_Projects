//Author: Noah Bennett
#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

//Calculate total sales and print it out
void total_sales(Node **grocery_item) {
	//create variables
	int total_sales = 0;
	Node *node_holder = *grocery_item;

	//add up total sales from each node until linked list ends
	while (node_holder != NULL) { 
        	total_sales += (node_holder -> grocery_item.pricing.retailQuantity);
        
        	node_holder = node_holder -> next;
    }

	printf("Total number of grocery items sold: %d\n", total_sales);
}
