/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE 
** STRICTLY ADHERED TO THE TENURES OF THE 
** OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. 
 */
//Author: Noah Bennett
#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"


//Calculate average profit and print it out
void average_profit(Node **grocery_item) {
	//create variables 
	float average_profit = 0.0, total_profit = 0.0;
	int total_sales = 0;
	Node *node_holder = *grocery_item;
	
	//add up total sales and total profit until there are no more nodes in the linked list
	while(node_holder != NULL) {
		total_profit += (node_holder -> grocery_item.pricing.retailQuantity) * ((node_holder -> grocery_item.pricing.retailPrice) - (node_holder -> grocery_item.pricing.wholesalePrice));
	
		total_sales += (node_holder -> grocery_item.pricing.retailQuantity);
        
        	node_holder = node_holder -> next;
	}

	//calculate the average profit
	average_profit = total_profit / total_sales;
	
	printf("Average Profit: $%2f\n", average_profit);
}
