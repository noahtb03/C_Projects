/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE 
** STRICTLY ADHERED TO THE TENURES OF THE 
** OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. 
 */
//Author: Noah Bennett
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

//Print all items currently in stock
void print_items_instock(Node **grocery_item) {
	//create node holder
	Node *node_holder = *grocery_item;

	//print table headers
	printf("In Stock Grocery Item List: \nStock#\tQuantity\tDepartment\t\t\tItem\n");

	//populate table in descending stock number order
	while (strlen(node_holder -> grocery_item.item) > 0) {
        	if ((node_holder -> grocery_item.pricing.wholesaleQuantity) - (node_holder -> grocery_item.pricing.retailQuantity) > 0) {
            		printf("%-5d\t%-5d\t\t%-20s\t\t%-40s\n", node_holder -> grocery_item.stockNumber, (node_holder -> grocery_item.pricing.wholesaleQuantity) - (node_holder -> grocery_item.pricing.retailQuantity), node_holder -> grocery_item.department, node_holder -> grocery_item.item);
		}
        
        node_holder = node_holder -> next;
	}

	printf("\n\n");
}
