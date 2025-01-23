/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE 
** STRICTLY ADHERED TO THE TENURES OF THE 
** OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. 
 */
//Author: Noah Bennett
#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

//Read in user file, and ask if user wants to continue
int read_file(Node **grocery_items, char *ifile, int month, int day, int year) {
	//create variables and open file stream
	FILE *inputfile = fopen(ifile, "r");
	int day_difference;
	
	//get the difference in days between current and date the input file was created
	day_difference = read_date(inputfile, month, day, year);

	//prompt user and get whether or not they want to continue
	printf("There are %d days difference between the date entered and the date in the file. Do you wish to continue? (y or n)", day_difference);
	char cont;
	scanf(" %c", &cont);
	if(cont != 'y') {
		return 0;
	}
	
	printf("Reading inventory from file \"%s\" \n", ifile);
	
	//read in grocery items in stock
	read_grocery_items(grocery_items, inputfile);

	return 1;
}

