/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE 
** STRICTLY ADHERED TO THE TENURES OF THE 
** OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. 
 */
//Author: Noah Bennett
#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"


//Insert node into linked list
void insert(Node **grocery_item, Node *new_node) {
	//create holder node
	Node *node_holder = *grocery_item;
	
	//if the first node isnt empty or isnt less than the first keep checking stock numbers until the new one is greater than the current in the linked list then add it
	//otherwise make the first node the new node
	if(node_holder == NULL) {
		*grocery_item = new_node;
		new_node -> next = NULL;	
	} else if(node_holder -> grocery_item.stockNumber <= new_node -> grocery_item.stockNumber) {
			new_node -> next = node_holder;
			*grocery_item = new_node;
	} else {
		while(node_holder -> next != NULL && node_holder -> next -> grocery_item.stockNumber > new_node -> grocery_item.stockNumber) {
			node_holder = node_holder -> next;
		}
		
		new_node -> next = node_holder -> next;
		node_holder -> next = new_node;
	} 

}
