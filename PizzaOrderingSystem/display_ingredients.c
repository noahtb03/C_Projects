/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE 
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO 
THIS ASSIGNMENT. 
 */ 
//Author: Noah Bennett

#include <stdio.h>

//Tell the user what ingredients are available
void display_ingredients(char **ingredients_list, int ingredients_on_hand) {

	printf("Welcome, we have these ingredients available:\n");

	//display each ingredient in the array
	for(int i = 0; i < ingredients_on_hand; i++) {
		printf("%d.%s \n", i+1, *(ingredients_list + i));
	}

}
