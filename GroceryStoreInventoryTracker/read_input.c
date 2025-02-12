//Author: Noah Bennett
#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

//Read in user input line, and the user input file, return whether user wants to continue the program
int read_input(Node **grocery_items, char* date_str, char* ifile) {
	//create variables
	int day, month, year, cont = 0;

	//take in month day year and input and output files
	sscanf(date_str,"%d/%d/%d", &month, &day, &year);
	
	//get whether or not program should continue
	cont = read_file(grocery_items, ifile, month, day, year);


	return cont;
}
