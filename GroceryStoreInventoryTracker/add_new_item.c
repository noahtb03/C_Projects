//Author: Noah Bennett
#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

//Add a new item to the grocery list/linked list
void add_new_item(Node **grocery_item) {
	//create new node and allocate it memory
	Node *new_node = calloc(1, sizeof(Node));

	//get all node info and make sure there isn't a duplicate stock number
	printf("Enter grocery item name: ");
	scanf(" %[^\n]", (new_node -> grocery_item.item));
	printf("Enter Department: ");
	scanf(" %[^\n]", (new_node -> grocery_item.department));
	printf("Enter item stock number: ");
	scanf(" %d", &(new_node -> grocery_item.stockNumber));
	while(check_duplicate(grocery_item, new_node)) {
		printf("Duplicate stock number entered, please enter again: ");
		scanf("%d", &(new_node -> grocery_item.stockNumber));
	}
	printf("Enter item retail price: ");
	scanf(" %f", &(new_node -> grocery_item.pricing.retailPrice));
	printf("Enter item Wholesale price: ");
	scanf(" %f", &(new_node -> grocery_item.pricing.wholesalePrice));
	printf("Enter item retail quantity: ");
	scanf(" %d", &(new_node -> grocery_item.pricing.retailQuantity));
	printf("Enter item Wholesale quantity: ");
	scanf(" %d", &(new_node -> grocery_item.pricing.wholesaleQuantity));

	//insert the node into the linked list
	insert(grocery_item, new_node);

}
