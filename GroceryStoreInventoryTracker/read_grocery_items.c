/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE 
** STRICTLY ADHERED TO THE TENURES OF THE 
** OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. 
 */
//Author: Noah Bennett
#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

//Read all grocery items from user input file
void read_grocery_items(Node **grocery_items, FILE *inputfile) {
	//create variables
	int items = -1, eof = 7;
	Node *new_node = NULL;	

	//allocate memory for new node
	new_node = calloc(1, sizeof(Node));

	//take in each line and store them in the new node
	while(eof == 7) {
		eof = fscanf(inputfile, " %[^\t]\t%[^\t]\t%d\t%f\t%f\t%d\t%d",(new_node -> grocery_item.item), (new_node -> grocery_item.department), &(new_node -> grocery_item.stockNumber), &(new_node -> grocery_item.pricing.retailPrice), &(new_node -> grocery_item.pricing.wholesalePrice), &(new_node -> grocery_item.pricing.retailQuantity), &(new_node -> grocery_item.pricing.wholesaleQuantity));
	
		//insert node into linked list
		insert(grocery_items, new_node);
		
		//free new node and reallocate memory
		new_node = calloc(1, sizeof(Node));
		
		items++;
	}

	printf("A total of %d inventory items have been read from the file. \n\n", items);

	free(new_node);
	
}
