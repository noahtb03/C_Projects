//Author: Noah Bennett

#include <stdio.h>

//write users info to a file
void writefile(char **ingredients, char ***user_pizza, char filename[50], int num_ingredients, int num_customer_ingredients) {
	//intialize file
	FILE *file = fopen(filename, "w");

	//print ingredients to file
	fprintf(file, "Available ingredients today: \n");
	for(int i = 0; i < num_ingredients; i++) {
		fprintf(file, "%d.%s\n", i+1, *(ingredients + i));
	}

	//print users pizza to a file
	fprintf(file, "\nYou ordered a pizza with: \n");
	for(int j = 0; j < num_customer_ingredients; j++) {
		fprintf(file, "%d.%s\n", j+1, **(user_pizza+j));
	}

	fclose(file);

}
