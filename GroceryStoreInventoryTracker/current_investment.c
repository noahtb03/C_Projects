/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE 
** STRICTLY ADHERED TO THE TENURES OF THE 
** OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. 
 */
//Author: Noah Bennett
#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

//Calculate current investment and print it out
void current_investment(Node **grocery_item) {
	//create variables
	float current_investment = 0.0;
    	Node *node_holder = *grocery_item;

	//add up current investment until there are no nodes left in the linked list
    	while (node_holder != NULL) { 
        	current_investment += (node_holder -> grocery_item.pricing.wholesalePrice) * ((node_holder -> grocery_item.pricing.wholesaleQuantity) - (node_holder -> grocery_item.pricing.retailQuantity));

        node_holder = node_holder -> next;
	}

	printf("Current investment: $%.2f\n", current_investment);
}

