//Author: Noah Bennett
#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

//Calculate total revenue and print it out
void total_revenue(Node **grocery_item){
	//create variables
	float total_revenue = 0.0;
    	Node *node_holder = *grocery_item;

	//add up revenue from each item until there are no nodes left in the linked list
    	while (node_holder != NULL) { 
        	total_revenue += (node_holder -> grocery_item.pricing.retailPrice) * (node_holder ->grocery_item.pricing.retailQuantity);

        	node_holder = node_holder -> next;
	}


	printf("Total revenue: $%.2f\n", total_revenue);
}
