/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE 
** STRICTLY ADHERED TO THE TENURES OF THE 
** OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. 
 */
//Author: Noah Bennett
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

//Print all items in a certain department
void print_department_items(Node **grocery_items) {
	//create node holder, and department string
	Node *node_holder = *grocery_items;
	char department[30];

	//take the department value from the user
	printf("Enter Department Name to print: ");
	scanf(" %[^\n]", department);

	//print table headers
	printf("In Stock Grocery Item List: \n\nStock#\tQuantity\tDepartment\tItem\n");

	//populate table in descending stock number order
	while (strlen(node_holder -> grocery_item.item) > 0) {
        	if (strstr((node_holder -> grocery_item.department), department) != NULL) {
            		printf("%u\t%u\t\t%-10s\t%-10s\n", node_holder -> grocery_item.stockNumber, (node_holder -> grocery_item.pricing.wholesaleQuantity) - (node_holder -> grocery_item.pricing.retailQuantity), node_holder -> grocery_item.department, node_holder -> grocery_item.item);
		}
        
        node_holder = node_holder -> next;
	}

	printf("\n\n");
}
