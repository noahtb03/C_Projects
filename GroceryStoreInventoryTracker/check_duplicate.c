/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE 
** STRICTLY ADHERED TO THE TENURES OF THE 
** OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. 
 */
//Author: Noah Bennett
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lab4.h"

//Check for duplicate stock numbers
bool check_duplicate(Node **grocery_item, Node *new_node) {
	//create holder node
	Node *node_holder = *grocery_item;

	//check each node stock number, if it is the same return true
	while(node_holder != NULL) {
		if((new_node -> grocery_item.stockNumber) == (node_holder -> grocery_item.stockNumber)) {
			return true;
		}

		node_holder = node_holder -> next;
	}

	return false;
}
