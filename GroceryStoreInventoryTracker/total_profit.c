/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE 
** STRICTLY ADHERED TO THE TENURES OF THE 
** OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. 
 */
//Author: Noah Bennett
#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

//Calculate total profit and print it out
void total_profit(Node **grocery_item) {
	//create variables
	float total_profit = 0.0;
  	Node *node_holder = *grocery_item;

	//add up total profit from each node until linked list ends
  	while (node_holder != NULL) {
        	total_profit += (node_holder -> grocery_item.pricing.retailQuantity) * ((node_holder -> grocery_item.pricing.retailPrice) - (node_holder -> grocery_item.pricing.wholesalePrice));

		node_holder = node_holder -> next;
    }

	printf("Total profit: $%.2f\n", total_profit);
}
