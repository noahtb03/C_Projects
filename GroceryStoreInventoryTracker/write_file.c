//Author: Noah Bennett
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

//Write file with table of all grocery items
void write_file(Node **grocery_item, char *file_name) {
	//initialize variables
	FILE *ofile;
	int node_counter = 0;
	Node *node_holder = *grocery_item;
	
	//open file stream
	ofile = fopen(file_name, "w");
	
	//write table header and table with all items, while counting the amount of items
	fprintf(ofile, "Grocery Item List: \n\nItem\t\t\t\t\t\tDepartment\t\tStock#\t\tWholesale Price\t\tRetail Price\t\tWholesale Quantity\t\tRetail Quantity\n");
    	while (strlen(node_holder -> grocery_item.item) > 0) {
    		fprintf(ofile, "%-40s\t%-20s\t%-20d\t%-20.2f\t%-20.2f\t%-20d\t%-20d\n", (node_holder -> grocery_item.item), (node_holder -> grocery_item.department), (node_holder -> grocery_item.stockNumber), node_holder -> grocery_item.pricing.wholesalePrice, node_holder -> grocery_item.pricing.retailPrice, node_holder -> grocery_item.pricing.wholesaleQuantity, node_holder -> grocery_item.pricing.retailQuantity);

        	node_holder = node_holder -> next;
        	node_counter++;
	}

	printf("A total of %d items were printed to the file \"%s\" \n", node_counter, file_name);

	fclose(ofile);

}
